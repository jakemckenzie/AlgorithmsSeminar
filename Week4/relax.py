def relax(graph):
    for _ in range(1, len(graph.vertices())):
        for u,v,data in graph.edges(data=True):
            if distance[v] > distance[u] + data["weight"]:
                distance[v] = distance[u] + data["weight"]
