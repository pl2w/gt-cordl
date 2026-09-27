#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_Enumerator_Type_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(JSONNode_Enumerator)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct Dictionary_2_Enumerator;
}
namespace GlobalNamespace {
struct Enumerator_JSONNode_Type;
}
namespace GlobalNamespace {
template<typename T>
struct List_1_Enumerator;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct JSONNode_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JSONNode_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JSONNode_Enumerator, "OVRSimpleJSON", "JSONNode/Enumerator");
// Dependencies OVRSimpleJSON.JSONNode::Enumerator::Type, System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.List`1::Enumerator<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSimpleJSON.JSONNode/Enumerator
struct CORDL_TYPE JSONNode_Enumerator {
public:
// Declarations
using Type = ::GlobalNamespace::Enumerator_JSONNode_Type;

 __declspec(property(get=get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>  Current;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Method MoveNext, addr 0xa589764, size 0x94, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0xa589618, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  aArrayEnum) ;

/// @brief Method .ctor, addr 0xa589654, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  aDictEnum) ;

/// @brief Method get_Current, addr 0xa589694, size 0xd0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*> get_Current() ;

/// @brief Method get_IsValid, addr 0xa589608, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

// Ctor Parameters []
// @brief default ctor
constexpr JSONNode_Enumerator() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::Enumerator_JSONNode_Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Object", ty: "::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Array", ty: "::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: None, comment: None }]
constexpr JSONNode_Enumerator(::GlobalNamespace::Enumerator_JSONNode_Type  type, ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  m_Object, ::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  m_Array) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12742};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Enumerator_JSONNode_Type  type;

/// @brief Field m_Object, offset: 0x8, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  m_Object;

/// @brief Field m_Array, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  m_Array;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JSONNode_Enumerator, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JSONNode_Enumerator, m_Object) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JSONNode_Enumerator, m_Array) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JSONNode_Enumerator) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
