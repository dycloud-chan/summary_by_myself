# neo4j

连接neo4j数据库，点击`localhost:7474/browser`


## 1. 创建节点

```
create(n:Person {name:'xxx', sex:'男', address:'xxx'})
```

## 2. 创建关系

```
match (a:Person), (b:Person)
where a.name = 'xxx' and b.name = 'xxx'
create (a) - [r:夫妻] -> (b)
return r

```

## 3. 删除关系
```
MATCH (n:Person {name:"xxx"})-[r:同学]->(m:Person {name:"aaa"})
DELETE r
```

## 4. 更新节点属性
```
match(a:Persion{name:'xxx'})
set a.address = 'xxx'
return a
```

## 5. 更新关系名称
```
MATCH (n:Person {name:"xxx"})-[r:同学]->(m:Person {name:"xxx"})
CREATE (n)-[r2:`学弟`]->(m)
// copy properties, if necessary
SET r2 = r
WITH r
DELETE r
```

## 6. 查询某个节点的第一层关系的所有节点
```
MATCH (n:Person) - [] ->(m:Person) where n.name='xxx‘ RETURN n, m
```
或者
```
MATCH (n:Person {name:'xxx'}) - [] ->(m:Person) RETURN n, m
```

## 7. 查询所有游离的节点
```
MATCH (n:Person) WHERE NOT(n:Person)-[]->(:Person) RETURN n
```

```
MATCH (n:Person) WHERE NOT(n:Person)-[]-(:Person) RETURN n
```
