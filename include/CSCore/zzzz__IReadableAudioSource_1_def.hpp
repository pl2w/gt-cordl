#pragma once
// IWYU pragma private; include "CSCore/IReadableAudioSource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IReadableAudioSource_1)
namespace CSCore {
class IAudioSource;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace CSCore {
template<typename T>
class IReadableAudioSource_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::CSCore::IReadableAudioSource_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::CSCore::IReadableAudioSource_1, "CSCore", "IReadableAudioSource`1");
// Dependencies 
namespace CSCore {
// cpp template
template<typename T>
// Is value type: false
// CS Name: CSCore.IReadableAudioSource`1<T>
class CORDL_TYPE IReadableAudioSource_1 {
public:
// Declarations
/// @brief Convert operator to "::CSCore::IAudioSource"
constexpr operator  ::CSCore::IAudioSource*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Read(::ArrayW<T>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Convert to "::CSCore::IAudioSource"
constexpr ::CSCore::IAudioSource* i___CSCore__IAudioSource() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IReadableAudioSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReadableAudioSource_1(IReadableAudioSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28865};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def CSCore
