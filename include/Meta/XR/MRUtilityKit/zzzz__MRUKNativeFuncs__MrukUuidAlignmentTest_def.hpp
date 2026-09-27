#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs__MrukUuidAlignmentTest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs__MrukUuidAlignmentTest)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs__MrukUuidAlignmentTest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/_MrukUuidAlignmentTest");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/_MrukUuidAlignmentTest
struct CORDL_TYPE MRUKNativeFuncs__MrukUuidAlignmentTest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs__MrukUuidAlignmentTest() ;

// Ctor Parameters [CppParam { name: "padding", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs__MrukUuidAlignmentTest(uint8_t  padding, ::System::Guid  uuid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25810};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field padding, offset: 0x0, size: 0x1, def value: None
 uint8_t  padding;

/// @brief Field uuid, offset: 0x4, size: 0x10, def value: None
 ::System::Guid  uuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest, padding) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest, uuid) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
