#pragma once
// IWYU pragma private; include "CSCore/IAudioSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioSource)
namespace CSCore {
class WaveFormat;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace CSCore {
class IAudioSource;
}
// Write type traits
MARK_REF_T(::CSCore::IAudioSource*);
DEFINE_IL2CPP_CLASS(::CSCore::IAudioSource*, "CSCore", "IAudioSource");
// Dependencies 
namespace CSCore {
// Is value type: false
// CS Name: CSCore.IAudioSource
class CORDL_TYPE IAudioSource {
public:
// Declarations
 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_WaveFormat)) ::CSCore::WaveFormat*  WaveFormat;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method get_CanSeek, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_CanSeek() ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int64_t get_Position() ;

/// @brief Method get_WaveFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::CSCore::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Position(int64_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioSource(IAudioSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28864};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def CSCore
