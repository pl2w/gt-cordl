#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/WitResponseLazyCreator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WitResponseLazyCreator)
namespace Meta::WitAi::Json {
class WitResponseArray;
}
namespace Meta::WitAi::Json {
class WitResponseClass;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Json {
class WitResponseLazyCreator;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::WitResponseLazyCreator*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseLazyCreator*, "Meta.WitAi.Json", "WitResponseLazyCreator");
// [DefaultMember("Item")]
// Dependencies Meta.WitAi.Json.WitResponseNode
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseLazyCreator
class CORDL_TYPE WitResponseLazyCreator : public ::Meta::WitAi::Json::WitResponseNode {
public:
// Declarations
 __declspec(property(get=get_AsArray)) ::Meta::WitAi::Json::WitResponseArray*  AsArray;

 __declspec(property(get=get_AsBool, put=set_AsBool)) bool  AsBool;

 __declspec(property(get=get_AsDouble, put=set_AsDouble)) double_t  AsDouble;

 __declspec(property(get=get_AsFloat, put=set_AsFloat)) float_t  AsFloat;

 __declspec(property(get=get_AsInt, put=set_AsInt)) int32_t  AsInt;

 __declspec(property(get=get_AsObject)) ::Meta::WitAi::Json::WitResponseClass*  AsObject;

 __declspec(property(get=get_Item, put=set_Item)) ::Meta::WitAi::Json::WitResponseNode*  Item[];

 __declspec(property(get=get_Item, put=set_Item)) ::Meta::WitAi::Json::WitResponseNode*  Item[];

/// @brief Field m_Key, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Key, put=__cordl_internal_set_m_Key)) ::StringW  m_Key;

/// @brief Field m_Node, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Node, put=__cordl_internal_set_m_Node)) ::Meta::WitAi::Json::WitResponseNode*  m_Node;

/// @brief Method Add, addr 0x9e4734c, size 0x84, virtual true, abstract: false, final false
inline void Add(::Meta::WitAi::Json::WitResponseNode*  aItem) ;

/// @brief Method Add, addr 0x9e473d0, size 0x88, virtual true, abstract: false, final false
inline void Add(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  aItem) ;

/// @brief Method Equals, addr 0x9e47458, size 0x10, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9e47468, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Meta::WitAi::Json::WitResponseLazyCreator* New_ctor(::Meta::WitAi::Json::WitResponseNode*  aNode) ;

static inline ::Meta::WitAi::Json::WitResponseLazyCreator* New_ctor(::Meta::WitAi::Json::WitResponseNode*  aNode, ::StringW  aKey) ;

/// @brief Method Set, addr 0x9e47120, size 0x60, virtual false, abstract: false, final false
inline void Set(::Meta::WitAi::Json::WitResponseNode*  aVal) ;

/// @brief Method ToString, addr 0x9e47470, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_m_Key() const;

constexpr ::StringW& __cordl_internal_get_m_Key() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_m_Node() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_m_Node() ;

constexpr void __cordl_internal_set_m_Key(::StringW  value) ;

constexpr void __cordl_internal_set_m_Node(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method .ctor, addr 0x9e4537c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Json::WitResponseNode*  aNode) ;

/// @brief Method .ctor, addr 0x9e460fc, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Json::WitResponseNode*  aNode, ::StringW  aKey) ;

/// @brief Method get_AsArray, addr 0x9e478a0, size 0x60, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseArray* get_AsArray() ;

/// @brief Method get_AsBool, addr 0x9e477a4, size 0x7c, virtual true, abstract: false, final false
inline bool get_AsBool() ;

/// @brief Method get_AsDouble, addr 0x9e476a8, size 0x7c, virtual true, abstract: false, final false
inline double_t get_AsDouble() ;

/// @brief Method get_AsFloat, addr 0x9e475ac, size 0x7c, virtual true, abstract: false, final false
inline float_t get_AsFloat() ;

/// @brief Method get_AsInt, addr 0x9e474b0, size 0x7c, virtual true, abstract: false, final false
inline int32_t get_AsInt() ;

/// @brief Method get_AsObject, addr 0x9e47900, size 0x60, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseClass* get_AsObject() ;

/// @brief Method get_Item, addr 0x9e47180, size 0x58, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_Item(int32_t  aIndex) ;

/// @brief Method get_Item, addr 0x9e4725c, size 0x68, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_Item(::StringW  aKey) ;

/// @brief Method set_AsBool, addr 0x9e47820, size 0x80, virtual true, abstract: false, final false
inline void set_AsBool(bool  value) ;

/// @brief Method set_AsDouble, addr 0x9e47724, size 0x80, virtual true, abstract: false, final false
inline void set_AsDouble(double_t  value) ;

/// @brief Method set_AsFloat, addr 0x9e47628, size 0x80, virtual true, abstract: false, final false
inline void set_AsFloat(float_t  value) ;

/// @brief Method set_AsInt, addr 0x9e4752c, size 0x80, virtual true, abstract: false, final false
inline void set_AsInt(int32_t  value) ;

/// @brief Method set_Item, addr 0x9e471d8, size 0x84, virtual true, abstract: false, final false
inline void set_Item(int32_t  aIndex, ::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method set_Item, addr 0x9e472c4, size 0x88, virtual true, abstract: false, final false
inline void set_Item(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseLazyCreator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseLazyCreator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseLazyCreator(WitResponseLazyCreator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseLazyCreator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseLazyCreator(WitResponseLazyCreator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31033};

/// @brief Field m_Node, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___m_Node;

/// @brief Field m_Key, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_Key;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::WitResponseLazyCreator, ___m_Node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseLazyCreator, ___m_Key) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::WitResponseLazyCreator) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
