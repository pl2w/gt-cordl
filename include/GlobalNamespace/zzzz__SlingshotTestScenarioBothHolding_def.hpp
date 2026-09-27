#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenarioBothHolding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotTestScenario_def.hpp"
CORDL_MODULE_EXPORT(SlingshotTestScenarioBothHolding)
namespace GlobalNamespace {
class TransferrableObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SlingshotTestScenarioBothHolding;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotTestScenarioBothHolding*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotTestScenarioBothHolding*, "", "SlingshotTestScenarioBothHolding");
// Dependencies SlingshotTestScenario
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotTestScenarioBothHolding
class CORDL_TYPE SlingshotTestScenarioBothHolding : public ::GlobalNamespace::SlingshotTestScenario {
public:
// Declarations
/// @brief Field testObject1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_testObject1, put=__cordl_internal_set_testObject1)) ::UnityW<::GlobalNamespace::TransferrableObject>  testObject1;

/// @brief Field testObject2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_testObject2, put=__cordl_internal_set_testObject2)) ::UnityW<::GlobalNamespace::TransferrableObject>  testObject2;

static inline ::GlobalNamespace::SlingshotTestScenarioBothHolding* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_testObject1() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_testObject1() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_testObject2() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_testObject2() ;

constexpr void __cordl_internal_set_testObject1(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_testObject2(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x573d1fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotTestScenarioBothHolding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenarioBothHolding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotTestScenarioBothHolding(SlingshotTestScenarioBothHolding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenarioBothHolding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotTestScenarioBothHolding(SlingshotTestScenarioBothHolding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1231};

/// @brief Field testObject1, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___testObject1;

/// @brief Field testObject2, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___testObject2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlingshotTestScenarioBothHolding, ___testObject1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotTestScenarioBothHolding, ___testObject2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlingshotTestScenarioBothHolding) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
