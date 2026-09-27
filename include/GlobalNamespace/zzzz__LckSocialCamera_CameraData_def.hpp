#pragma once
// IWYU pragma private; include "GlobalNamespace/LckSocialCamera_CameraData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraState_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckSocialCamera_CameraData)
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct LckSocialCamera_CameraState;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckSocialCamera_CameraData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckSocialCamera_CameraData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckSocialCamera_CameraData, "", "LckSocialCamera/CameraData");
// [NetworkStructWeaved(1)]
// Dependencies LckSocialCamera::CameraState
namespace GlobalNamespace {
// Is value type: true
// CS Name: LckSocialCamera/CameraData
#pragma pack(push, 0)
struct CORDL_TYPE LckSocialCamera_CameraData {
public:
// Declarations
/// @brief Field currentState, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::LckSocialCamera_CameraState  currentState;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::GlobalNamespace::LckSocialCamera_CameraState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::LckSocialCamera_CameraState& __cordl_internal_get_currentState() ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::LckSocialCamera_CameraState  value) ;

/// @brief Method .ctor, addr 0x56cb3f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::LckSocialCamera_CameraState  state) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckSocialCamera_CameraData() ;

// Ctor Parameters [CppParam { name: "currentState", ty: "::GlobalNamespace::LckSocialCamera_CameraState", modifiers: "", def_value: None, comment: None }]
constexpr LckSocialCamera_CameraData(::GlobalNamespace::LckSocialCamera_CameraState  currentState) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___currentState_padding[0x0];
/// @brief Field currentState, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::LckSocialCamera_CameraState  ___currentState;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___currentState_padding_forAlignment[0x0];
/// @brief Field currentState, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::LckSocialCamera_CameraState  ___currentState_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1038};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LckSocialCamera_CameraData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
