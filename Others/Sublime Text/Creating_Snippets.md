# How to Create Snippets in Sublime Text

- Open Sublime Text -> Tools -> Developer -> New Snippet (the below code will show up. Click on 'Code' tab to view it)

<snippet>
    <content><![CDATA[
Hello, ${1:this} is a ${2:snippet}.
]]></content>
    <!-- Optional: Set a tabTrigger to define how to trigger the snippet -->
    <!-- <tabTrigger>hello</tabTrigger> -->
    <!-- Optional: Set a scope to limit where the snippet will trigger -->
    <!-- <scope>source.python</scope> -->
</snippet>


- Now, to modify the content inside the block, replace 3rd line by the snippet code you want to use. i.e, replace "Hello, ${1:this} is a ${2:snippet}." with the code of your choice.
- Enable the tab trigger by entering a keyword of your choice to invoke the snippet. 
- Set the scope to 'source.c++' then save the file with '.sublime-snippet' extension.
  eg: template.sublime-snippet

# Editing already created Snippet:
- Open Sublime Text -> Preferences -> Browse Packages 
- Go to User in the newly opened window
- Now you can see all the saved files/snippets in the new window & you can edit & save changes. 
