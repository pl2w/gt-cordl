#pragma once
// IWYU pragma private; include "XNode/NodeDataCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NodeDataCache)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace XNode {
class NodeDataCache_PortDataCache;
}
namespace XNode {
class NodeDataCache___c;
}
namespace XNode {
class NodeDataCache___c__DisplayClass10_0;
}
namespace XNode {
class NodeDataCache___c__DisplayClass9_0;
}
namespace XNode {
class NodePort;
}
namespace XNode {
class Node;
}
// Forward declare root types
namespace XNode {
class NodeDataCache;
}
namespace XNode {
class NodeDataCache_PortDataCache;
}
namespace XNode {
class NodeDataCache___c;
}
namespace XNode {
class NodeDataCache___c__DisplayClass10_0;
}
namespace XNode {
class NodeDataCache___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::XNode::NodeDataCache*);
MARK_REF_T(::XNode::NodeDataCache_PortDataCache*);
MARK_REF_T(::XNode::NodeDataCache___c*);
MARK_REF_T(::XNode::NodeDataCache___c__DisplayClass10_0*);
MARK_REF_T(::XNode::NodeDataCache___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::XNode::NodeDataCache*, "XNode", "NodeDataCache");
DEFINE_IL2CPP_CLASS(::XNode::NodeDataCache_PortDataCache*, "XNode", "NodeDataCache/PortDataCache");
DEFINE_IL2CPP_CLASS(::XNode::NodeDataCache___c*, "XNode", "NodeDataCache/<>c");
DEFINE_IL2CPP_CLASS(::XNode::NodeDataCache___c__DisplayClass10_0*, "XNode", "NodeDataCache/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::XNode::NodeDataCache___c__DisplayClass9_0*, "XNode", "NodeDataCache/<>c__DisplayClass9_0");
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.NodeDataCache
class CORDL_TYPE NodeDataCache : public ::System::Object {
public:
// Declarations
using PortDataCache = ::XNode::NodeDataCache_PortDataCache;

using __c = ::XNode::NodeDataCache___c;

using __c__DisplayClass10_0 = ::XNode::NodeDataCache___c__DisplayClass10_0;

using __c__DisplayClass9_0 = ::XNode::NodeDataCache___c__DisplayClass9_0;

/// @brief Field formerlySerializedAsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_formerlySerializedAsCache, put=setStaticF_formerlySerializedAsCache)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  formerlySerializedAsCache;

/// @brief Field portDataCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_portDataCache, put=setStaticF_portDataCache)) ::XNode::NodeDataCache_PortDataCache*  portDataCache;

/// @brief Field typeQualifiedNameCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_typeQualifiedNameCache, put=setStaticF_typeQualifiedNameCache)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  typeQualifiedNameCache;

/// @brief Method BuildCache, addr 0xb98f924, size 0x41c, virtual false, abstract: false, final false
static inline void BuildCache() ;

/// @brief Method CachePorts, addr 0xb990acc, size 0x91c, virtual false, abstract: false, final false
static inline void CachePorts(::System::Type*  nodeType) ;

/// @brief Method GetBackingValueType, addr 0xb990970, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Type* GetBackingValueType(::System::Type*  portValType) ;

/// @brief Method GetNodeFields, addr 0xb9913e8, size 0x2ac, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* GetNodeFields(::System::Type*  nodeType) ;

/// @brief Method GetTypeQualifiedName, addr 0xb98f7e4, size 0x140, virtual false, abstract: false, final false
static inline ::StringW GetTypeQualifiedName(::System::Type*  type) ;

/// @brief Method IsDynamicListPort, addr 0xb98fff4, size 0x1a8, virtual false, abstract: false, final false
static inline bool IsDynamicListPort(::XNode::NodePort*  port) ;

/// @brief Method UpdatePorts, addr 0xb98c1c4, size 0x838, virtual false, abstract: false, final false
static inline void UpdatePorts(::XNode::Node*  node, ::System::Collections::Generic::Dictionary_2<::StringW,::XNode::NodePort*>*  ports) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* getStaticF_formerlySerializedAsCache() ;

static inline ::XNode::NodeDataCache_PortDataCache* getStaticF_portDataCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>* getStaticF_typeQualifiedNameCache() ;

/// @brief Method get_Initialized, addr 0xb98f794, size 0x50, virtual false, abstract: false, final false
static inline bool get_Initialized() ;

static inline void setStaticF_formerlySerializedAsCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value) ;

static inline void setStaticF_portDataCache(::XNode::NodeDataCache_PortDataCache*  value) ;

static inline void setStaticF_typeQualifiedNameCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeDataCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeDataCache(NodeDataCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeDataCache(NodeDataCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::XNode::NodeDataCache) == 0x10, "Size mismatch!");

} // namespace end def XNode
// [CompilerGenerated]
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.NodeDataCache/<>c__DisplayClass9_0
class CORDL_TYPE NodeDataCache___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Func_2<::System::Type*,bool>*  __9__0;

/// @brief Field baseType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseType, put=__cordl_internal_set_baseType)) ::System::Type*  baseType;

static inline ::XNode::NodeDataCache___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <BuildCache>b__0, addr 0xb991c24, size 0x5c, virtual false, abstract: false, final false
inline bool _BuildCache_b__0(::System::Type*  t) ;

constexpr ::System::Func_2<::System::Type*,bool>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Func_2<::System::Type*,bool>*& __cordl_internal_get___9__0() ;

constexpr ::System::Type* const& __cordl_internal_get_baseType() const;

constexpr ::System::Type*& __cordl_internal_get_baseType() ;

constexpr void __cordl_internal_set___9__0(::System::Func_2<::System::Type*,bool>*  value) ;

constexpr void __cordl_internal_set_baseType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xb990a7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeDataCache___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache___c__DisplayClass9_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeDataCache___c__DisplayClass9_0(NodeDataCache___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache___c__DisplayClass9_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeDataCache___c__DisplayClass9_0(NodeDataCache___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32276};

/// @brief Field baseType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___baseType;

/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::System::Type*,bool>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::NodeDataCache___c__DisplayClass9_0, ___baseType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::NodeDataCache___c__DisplayClass9_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(sizeof(::XNode::NodeDataCache___c__DisplayClass9_0) == 0x20, "Size mismatch!");

} // namespace end def XNode
// [CompilerGenerated]
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.NodeDataCache/<>c__DisplayClass10_0
class CORDL_TYPE NodeDataCache___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field parentField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentField, put=__cordl_internal_set_parentField)) ::System::Reflection::FieldInfo*  parentField;

static inline ::XNode::NodeDataCache___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <GetNodeFields>b__0, addr 0xb991bd0, size 0x54, virtual false, abstract: false, final false
inline bool _GetNodeFields_b__0(::System::Reflection::FieldInfo*  x) ;

constexpr ::System::Reflection::FieldInfo* const& __cordl_internal_get_parentField() const;

constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get_parentField() ;

constexpr void __cordl_internal_set_parentField(::System::Reflection::FieldInfo*  value) ;

/// @brief Method .ctor, addr 0xb991694, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeDataCache___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeDataCache___c__DisplayClass10_0(NodeDataCache___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeDataCache___c__DisplayClass10_0(NodeDataCache___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32275};

/// @brief Field parentField, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::FieldInfo*  ___parentField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::NodeDataCache___c__DisplayClass10_0, ___parentField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::XNode::NodeDataCache___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace end def XNode
// [CompilerGenerated]
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.NodeDataCache/<>c
class CORDL_TYPE NodeDataCache___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::XNode::NodeDataCache___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_2<::System::Object*,bool>*  __9__11_0;

/// @brief Field <>9__11_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_1, put=setStaticF___9__11_1)) ::System::Func_2<::System::Object*,bool>*  __9__11_1;

/// @brief Field <>9__11_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_2, put=setStaticF___9__11_2)) ::System::Func_2<::System::Object*,bool>*  __9__11_2;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::System::Object*,bool>*  __9__8_0;

static inline ::XNode::NodeDataCache___c* New_ctor() ;

/// @brief Method <CachePorts>b__11_0, addr 0xb991a68, size 0x78, virtual false, abstract: false, final false
inline bool _CachePorts_b__11_0(::System::Object*  x) ;

/// @brief Method <CachePorts>b__11_1, addr 0xb991ae0, size 0x78, virtual false, abstract: false, final false
inline bool _CachePorts_b__11_1(::System::Object*  x) ;

/// @brief Method <CachePorts>b__11_2, addr 0xb991b58, size 0x78, virtual false, abstract: false, final false
inline bool _CachePorts_b__11_2(::System::Object*  x) ;

/// @brief Method <IsDynamicListPort>b__8_0, addr 0xb991980, size 0xe8, virtual false, abstract: false, final false
inline bool _IsDynamicListPort_b__8_0(::System::Object*  x) ;

/// @brief Method .ctor, addr 0xb991978, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::XNode::NodeDataCache___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Object*,bool>* getStaticF___9__11_0() ;

static inline ::System::Func_2<::System::Object*,bool>* getStaticF___9__11_1() ;

static inline ::System::Func_2<::System::Object*,bool>* getStaticF___9__11_2() ;

static inline ::System::Func_2<::System::Object*,bool>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::XNode::NodeDataCache___c*  value) ;

static inline void setStaticF___9__11_0(::System::Func_2<::System::Object*,bool>*  value) ;

static inline void setStaticF___9__11_1(::System::Func_2<::System::Object*,bool>*  value) ;

static inline void setStaticF___9__11_2(::System::Func_2<::System::Object*,bool>*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::System::Object*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeDataCache___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeDataCache___c(NodeDataCache___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeDataCache___c(NodeDataCache___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32274};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::XNode::NodeDataCache___c) == 0x10, "Size mismatch!");

} // namespace end def XNode
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>
namespace XNode {
// Is value type: false
// CS Name: XNode.NodeDataCache/PortDataCache
class CORDL_TYPE NodeDataCache_PortDataCache : public ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::XNode::NodePort*>*> {
public:
// Declarations
static inline ::XNode::NodeDataCache_PortDataCache* New_ctor() ;

/// @brief Method .ctor, addr 0xb990a84, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeDataCache_PortDataCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache_PortDataCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeDataCache_PortDataCache(NodeDataCache_PortDataCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeDataCache_PortDataCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeDataCache_PortDataCache(NodeDataCache_PortDataCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32273};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::XNode::NodeDataCache_PortDataCache) == 0x50, "Size mismatch!");

} // namespace end def XNode
