#pragma once
// IWYU pragma private; include "GlobalNamespace/GRHealthMeterNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRHealthMeterNode)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GRHealthMeterNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRHealthMeterNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRHealthMeterNode*, "", "GRHealthMeterNode");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRHealthMeterNode
class CORDL_TYPE GRHealthMeterNode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isEmpty, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEmpty, put=__cordl_internal_set_isEmpty)) bool  isEmpty;

/// @brief Field showEmpty, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_showEmpty, put=__cordl_internal_set_showEmpty)) ::UnityW<::UnityEngine::GameObject>  showEmpty;

/// @brief Field showFull, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_showFull, put=__cordl_internal_set_showFull)) ::UnityW<::UnityEngine::GameObject>  showFull;

static inline ::GlobalNamespace::GRHealthMeterNode* New_ctor() ;

/// @brief Method SetEmpty, addr 0x589e144, size 0xec, virtual false, abstract: false, final false
inline void SetEmpty(bool  empty) ;

/// @brief Method Setup, addr 0x589e238, size 0x10, virtual false, abstract: false, final false
inline void Setup() ;

constexpr bool const& __cordl_internal_get_isEmpty() const;

constexpr bool& __cordl_internal_get_isEmpty() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_showEmpty() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_showEmpty() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_showFull() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_showFull() ;

constexpr void __cordl_internal_set_isEmpty(bool  value) ;

constexpr void __cordl_internal_set_showEmpty(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_showFull(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x589e248, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRHealthMeterNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRHealthMeterNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRHealthMeterNode(GRHealthMeterNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRHealthMeterNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRHealthMeterNode(GRHealthMeterNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1985};

/// @brief Field showFull, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___showFull;

/// @brief Field showEmpty, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___showEmpty;

/// @brief Field isEmpty, offset: 0x30, size: 0x1, def value: None
 bool  ___isEmpty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRHealthMeterNode, ___showFull) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHealthMeterNode, ___showEmpty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHealthMeterNode, ___isEmpty) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRHealthMeterNode) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
