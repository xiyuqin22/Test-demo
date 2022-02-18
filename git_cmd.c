1.如何查看修改记录：
① git log --pretty=oneline src/helloworld
② git show d0c20fba4da2ca2dc860d7de48b9d0c5446b1d28
③ git log -p git_cmd.c

2.查看一个文件修改前后的差异：
① git diff

3.想要修改内容后提交修改信息到远端，如何用指令实现：
① git push -u origin main
② git push origin main

4.在未把修改添加到暂存区之前，如何用指令恢复到修改之前的状态：
① git checkout -- git_cmd.c

5.如果已经加到暂存区，如何用指令恢复到修改状态：
① git reset HEAD git_cmd.c

6.想要回到项目上一版本或指令版本时，如何通过指令实现：
① git reset --hard HEAD^
② git reset --hard d0c20fba4da2ca2dc860d7de48b9d0c5446b1d28 或 d0c20fba

7.想要将某一个文件回到制定版本时，如何通过指令实现：
① git checkout d0c20fba --git_cmd.c

8.如何创建、删除tag以及上传到服务器：
① git tag v1.0 ==> 在当前commit上创建tag
② git tag d0c20fba v1.0 ==> 在某一笔commit上创建tag
③ git tag -d v1.0 或 v0.5
④ git push origin v1.0
