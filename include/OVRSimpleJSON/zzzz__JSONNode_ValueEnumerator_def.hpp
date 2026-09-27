#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNode_ValueEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_Enumerator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(JSONNode_ValueEnumerator)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct Dictionary_2_Enumerator;
}
namespace GlobalNamespace {
struct JSONNode_Enumerator;
}
namespace GlobalNamespace {
template<typename T>
struct List_1_Enumerator;
}
namespace OVRSimpleJSON {
class JSONNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct JSONNode_ValueEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JSONNode_ValueEnumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JSONNode_ValueEnumerator, "OVRSimpleJSON", "JSONNode/ValueEnumerator");
// Dependencies OVRSimpleJSON.JSONNode::Enumerator
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSimpleJSON.JSONNode/ValueEnumerator
struct CORDL_TYPE JSONNode_ValueEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::OVRSimpleJSON::JSONNode*  Current;

/// @brief Method GetEnumerator, addr 0xa589948, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::JSONNode_ValueEnumerator GetEnumerator() ;

/// @brief Method MoveNext, addr 0xa589944, size 0x4, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0xa5897f8, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  aArrayEnum) ;

/// @brief Method .ctor, addr 0xa589868, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  aDictEnum) ;

/// @brief Method .ctor, addr 0xa5898e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::JSONNode_Enumerator  aEnumerator) ;

/// @brief Method get_Current, addr 0xa589900, size 0x44, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr JSONNode_ValueEnumerator() ;

// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::JSONNode_Enumerator", modifiers: "", def_value: None, comment: None }]
constexpr JSONNode_ValueEnumerator(::GlobalNamespace::JSONNode_Enumerator  m_Enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12743};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field m_Enumerator, offset: 0x0, size: 0x48, def value: None
 ::GlobalNamespace::JSONNode_Enumerator  m_Enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JSONNode_ValueEnumerator, m_Enumerator) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JSONNode_ValueEnumerator) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
