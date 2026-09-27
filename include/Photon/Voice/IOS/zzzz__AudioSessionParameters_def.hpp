#pragma once
// IWYU pragma private; include "Photon/Voice/IOS/AudioSessionParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/IOS/zzzz__AudioSessionCategoryOption_def.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionCategory_def.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionMode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSessionParameters)
namespace Photon::Voice::IOS {
struct AudioSessionCategoryOption;
}
// Forward declare root types
namespace Photon::Voice::IOS {
struct AudioSessionParameters;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::IOS::AudioSessionParameters);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IOS::AudioSessionParameters, "Photon.Voice.IOS", "AudioSessionParameters");
// Dependencies Photon.Voice.IOS.AudioSessionCategory, Photon.Voice.IOS.AudioSessionCategoryOption, Photon.Voice.IOS.AudioSessionMode
namespace Photon::Voice::IOS {
// Is value type: true
// CS Name: Photon.Voice.IOS.AudioSessionParameters
struct CORDL_TYPE AudioSessionParameters {
public:
// Declarations
/// @brief Method CategoryOptionsToInt, addr 0xa75facc, size 0x3c, virtual false, abstract: false, final false
inline int32_t CategoryOptionsToInt() ;

/// @brief Method ToString, addr 0xa75fb08, size 0x1c8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioSessionParameters() ;

// Ctor Parameters [CppParam { name: "Category", ty: "::Photon::Voice::IOS::AudioSessionCategory", modifiers: "", def_value: None, comment: None }, CppParam { name: "Mode", ty: "::Photon::Voice::IOS::AudioSessionMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "CategoryOptions", ty: "::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption>", modifiers: "", def_value: None, comment: None }]
constexpr AudioSessionParameters(::Photon::Voice::IOS::AudioSessionCategory  Category, ::Photon::Voice::IOS::AudioSessionMode  Mode, ::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption>  CategoryOptions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28523};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Category, offset: 0x0, size: 0x4, def value: None
 ::Photon::Voice::IOS::AudioSessionCategory  Category;

/// @brief Field Mode, offset: 0x4, size: 0x4, def value: None
 ::Photon::Voice::IOS::AudioSessionMode  Mode;

/// @brief Field CategoryOptions, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption>  CategoryOptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::IOS::AudioSessionParameters, Category) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::IOS::AudioSessionParameters, Mode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::IOS::AudioSessionParameters, CategoryOptions) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::IOS::AudioSessionParameters) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice::IOS
