function isSymmetric(root) {
    return isEqual(reverse(root.left), root.right);
  }
  
function reverse(tree) {
    if (tree == null) return;
    var temp = tree.left;
    tree.left = reverse(tree.right);
    tree.right = reverse(temp);
    return tree;
}
  
function isEqual(tree1, tree2) {
    if (tree1 == null && tree2 == null) return true;
    if (tree1 == null || tree2 == null) return false;
    return isEqual(tree1.left, tree2.left) && isEqual(tree1.right, tree2.right);
}