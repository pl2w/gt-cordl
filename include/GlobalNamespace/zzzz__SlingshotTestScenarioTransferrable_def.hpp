#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenarioTransferrable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotTestScenario_def.hpp"
CORDL_MODULE_EXPORT(SlingshotTestScenarioTransferrable)
namespace GlobalNamespace {
class TransferrableObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SlingshotTestScenarioTransferrable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotTestScenarioTransferrable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotTestScenarioTransferrable*, "", "SlingshotTestScenarioTransferrable");
// Dependencies SlingshotTestScenario
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotTestScenarioTransferrable
class CORDL_TYPE SlingshotTestScenarioTransferrable : public ::GlobalNamespace::SlingshotTestScenario {
public:
// Declarations
/// @brief Field testObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_testObject, put=__cordl_internal_set_testObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  testObject;

static inline ::GlobalNamespace::SlingshotTestScenarioTransferrable* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_testObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_testObject() ;

constexpr void __cordl_internal_set_testObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x573d20c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotTestScenarioTransferrable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenarioTransferrable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotTestScenarioTransferrable(SlingshotTestScenarioTransferrable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenarioTransferrable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotTestScenarioTransferrable(SlingshotTestScenarioTransferrable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1233};

/// @brief Field testObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___testObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlingshotTestScenarioTransferrable, ___testObject) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlingshotTestScenarioTransferrable) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
