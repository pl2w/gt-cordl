#pragma once
// IWYU pragma private; include "GlobalNamespace/RCHoverboard__SingleInputOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTOption_1_def.hpp"
#include "GlobalNamespace/zzzz__RCHoverboard__EInputSource_def.hpp"
#include "GlobalNamespace/zzzz__StringEnum_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RCHoverboard__SingleInputOption)
namespace GlobalNamespace {
struct RCHoverboard__EInputSource;
}
namespace GlobalNamespace {
struct RCRemoteHoldable_RCInput;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
struct RCHoverboard__SingleInputOption;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RCHoverboard__SingleInputOption);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RCHoverboard__SingleInputOption, "", "RCHoverboard/_SingleInputOption");
// Dependencies GTOption`1<T>, RCHoverboard::_EInputSource, StringEnum`1<TEnum>
namespace GlobalNamespace {
// Is value type: true
// CS Name: RCHoverboard/_SingleInputOption
struct CORDL_TYPE RCHoverboard__SingleInputOption {
public:
// Declarations
/// @brief Method Get, addr 0x5617198, size 0x17c, virtual false, abstract: false, final false
inline float_t Get(::GlobalNamespace::RCRemoteHoldable_RCInput  input) ;

/// @brief Method .ctor, addr 0x5617dd4, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::RCHoverboard__EInputSource  source, ::UnityEngine::AnimationCurve*  remapCurve) ;

// Ctor Parameters []
// @brief default ctor
constexpr RCHoverboard__SingleInputOption() ;

// Ctor Parameters [CppParam { name: "source", ty: "::GlobalNamespace::GTOption_1<::GlobalNamespace::StringEnum_1<::GlobalNamespace::RCHoverboard__EInputSource>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "remapCurve", ty: "::GlobalNamespace::GTOption_1<::UnityEngine::AnimationCurve*>", modifiers: "", def_value: None, comment: None }]
constexpr RCHoverboard__SingleInputOption(::GlobalNamespace::GTOption_1<::GlobalNamespace::StringEnum_1<::GlobalNamespace::RCHoverboard__EInputSource>>  source, ::GlobalNamespace::GTOption_1<::UnityEngine::AnimationCurve*>  remapCurve) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field source, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::GTOption_1<::GlobalNamespace::StringEnum_1<::GlobalNamespace::RCHoverboard__EInputSource>>  source;

/// @brief Field remapCurve, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::GTOption_1<::UnityEngine::AnimationCurve*>  remapCurve;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RCHoverboard__SingleInputOption, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard__SingleInputOption, remapCurve) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RCHoverboard__SingleInputOption) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
