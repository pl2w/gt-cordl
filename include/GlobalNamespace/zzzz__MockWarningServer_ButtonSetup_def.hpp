#pragma once
// IWYU pragma private; include "GlobalNamespace/MockWarningServer_ButtonSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WarningButtonResult_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MockWarningServer_ButtonSetup)
namespace GlobalNamespace {
struct WarningButtonResult;
}
// Forward declare root types
namespace GlobalNamespace {
struct MockWarningServer_ButtonSetup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MockWarningServer_ButtonSetup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockWarningServer_ButtonSetup, "", "MockWarningServer/ButtonSetup");
// Dependencies WarningButtonResult
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockWarningServer/ButtonSetup
struct CORDL_TYPE MockWarningServer_ButtonSetup {
public:
// Declarations
/// @brief Method .ctor, addr 0x5a3f2c4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  txt, ::GlobalNamespace::WarningButtonResult  result) ;

// Ctor Parameters []
// @brief default ctor
constexpr MockWarningServer_ButtonSetup() ;

// Ctor Parameters [CppParam { name: "buttonText", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "buttonResult", ty: "::GlobalNamespace::WarningButtonResult", modifiers: "", def_value: None, comment: None }]
constexpr MockWarningServer_ButtonSetup(::StringW  buttonText, ::GlobalNamespace::WarningButtonResult  buttonResult) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2962};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field buttonText, offset: 0x0, size: 0x8, def value: None
 ::StringW  buttonText;

/// @brief Field buttonResult, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::WarningButtonResult  buttonResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockWarningServer_ButtonSetup, buttonText) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockWarningServer_ButtonSetup, buttonResult) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockWarningServer_ButtonSetup) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
