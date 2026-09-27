#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ICinemachineMixer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICinemachineMixer)
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ICinemachineMixer*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ICinemachineMixer*, "Unity.Cinemachine", "ICinemachineMixer");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ICinemachineMixer
class CORDL_TYPE ICinemachineMixer {
public:
// Declarations
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr operator  ::Unity::Cinemachine::ICinemachineCamera*() noexcept;

/// @brief Method IsLiveChild, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  child, bool  dominantChildOnly) ;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* i___Unity__Cinemachine__ICinemachineCamera() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ICinemachineMixer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICinemachineMixer(ICinemachineMixer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22323};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
