#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaConstants)
// Forward declare root types
namespace GlobalNamespace {
class GorillaConstants;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaConstants*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaConstants*, "", "GorillaConstants");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaConstants
class CORDL_TYPE GorillaConstants : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaConstants(GorillaConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaConstants(GorillaConstants const& ) = delete;

/// @brief Field PlayerColorMin offset 0xffffffff size 0x4
static constexpr float_t  PlayerColorMin{static_cast<float_t>(0.0f)};

/// @brief Field PlayerLocalRigName offset 0xffffffff size 0x8
static constexpr ::ConstString  PlayerLocalRigName{u"Local Gorilla Player"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2156};

/// @brief Field blueValue offset 0xffffffff size 0x8
static constexpr ::ConstString  blueValue{u"blueValue"};

/// @brief Field greenValue offset 0xffffffff size 0x8
static constexpr ::ConstString  greenValue{u"greenValue"};

/// @brief Field redValue offset 0xffffffff size 0x8
static constexpr ::ConstString  redValue{u"redValue"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaConstants) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
