#pragma once
// IWYU pragma private; include "CSCore/IWaveSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IWaveSource)
namespace CSCore {
class IAudioSource;
}
namespace CSCore {
template<typename T>
class IReadableAudioSource_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace CSCore {
class IWaveSource;
}
// Write type traits
MARK_REF_T(::CSCore::IWaveSource*);
DEFINE_IL2CPP_CLASS(::CSCore::IWaveSource*, "CSCore", "IWaveSource");
// Dependencies 
namespace CSCore {
// Is value type: false
// CS Name: CSCore.IWaveSource
class CORDL_TYPE IWaveSource {
public:
// Declarations
/// @brief Convert operator to "::CSCore::IAudioSource"
constexpr operator  ::CSCore::IAudioSource*() noexcept;

/// @brief Convert operator to "::CSCore::IReadableAudioSource_1<uint8_t>"
constexpr operator  ::CSCore::IReadableAudioSource_1<uint8_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert to "::CSCore::IAudioSource"
constexpr ::CSCore::IAudioSource* i___CSCore__IAudioSource() noexcept;

/// @brief Convert to "::CSCore::IReadableAudioSource_1<uint8_t>"
constexpr ::CSCore::IReadableAudioSource_1<uint8_t>* i___CSCore__IReadableAudioSource_1_uint8_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IWaveSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWaveSource(IWaveSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28866};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def CSCore
