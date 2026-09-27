#pragma once
// IWYU pragma private; include "Meta/Voice/UnityOpus/Decoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/UnityOpus/zzzz__NumChannels_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Decoder)
namespace Meta::Voice::UnityOpus {
struct NumChannels;
}
namespace Meta::Voice::UnityOpus {
struct SamplingFrequency;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Meta::Voice::UnityOpus {
class Decoder;
}
// Write type traits
MARK_REF_T(::Meta::Voice::UnityOpus::Decoder*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::UnityOpus::Decoder*, "Meta.Voice.UnityOpus", "Decoder");
// Dependencies Meta.Voice.UnityOpus.NumChannels, System.IntPtr, System.Object
namespace Meta::Voice::UnityOpus {
// Is value type: false
// CS Name: Meta.Voice.UnityOpus.Decoder
class CORDL_TYPE Decoder : public ::System::Object {
public:
// Declarations
/// @brief Field channels, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) ::Meta::Voice::UnityOpus::NumChannels  channels;

/// @brief Field decoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_decoder, put=__cordl_internal_set_decoder)) ::System::IntPtr  decoder;

/// @brief Field disposedValue, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposedValue, put=__cordl_internal_set_disposedValue)) bool  disposedValue;

/// @brief Field softclipMem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_softclipMem, put=__cordl_internal_set_softclipMem)) ::ArrayW<float_t>  softclipMem;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Decode, addr 0x9e1571c, size 0x68, virtual false, abstract: false, final false
inline int32_t Decode(::ArrayW<uint8_t>  data, int32_t  dataLength, ::ArrayW<float_t>  pcm, int32_t  decodeFec) ;

/// @brief Method Dispose, addr 0x9e15a34, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9e158f4, size 0x34, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x9e159a4, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Meta::Voice::UnityOpus::Decoder* New_ctor(::Meta::Voice::UnityOpus::SamplingFrequency  samplingFrequency, ::Meta::Voice::UnityOpus::NumChannels  channels) ;

constexpr ::Meta::Voice::UnityOpus::NumChannels const& __cordl_internal_get_channels() const;

constexpr ::Meta::Voice::UnityOpus::NumChannels& __cordl_internal_get_channels() ;

constexpr ::System::IntPtr const& __cordl_internal_get_decoder() const;

constexpr ::System::IntPtr& __cordl_internal_get_decoder() ;

constexpr bool const& __cordl_internal_get_disposedValue() const;

constexpr bool& __cordl_internal_get_disposedValue() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_softclipMem() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_softclipMem() ;

constexpr void __cordl_internal_set_channels(::Meta::Voice::UnityOpus::NumChannels  value) ;

constexpr void __cordl_internal_set_decoder(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_disposedValue(bool  value) ;

constexpr void __cordl_internal_set_softclipMem(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x9e1554c, size 0x13c, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::UnityOpus::SamplingFrequency  samplingFrequency, ::Meta::Voice::UnityOpus::NumChannels  channels) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Decoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Decoder(Decoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Decoder(Decoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33119};

/// @brief Field decoder, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___decoder;

/// @brief Field channels, offset: 0x18, size: 0x4, def value: None
 ::Meta::Voice::UnityOpus::NumChannels  ___channels;

/// @brief Field softclipMem, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ___softclipMem;

/// @brief Field disposedValue, offset: 0x28, size: 0x1, def value: None
 bool  ___disposedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::UnityOpus::Decoder, ___decoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::UnityOpus::Decoder, ___channels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::UnityOpus::Decoder, ___softclipMem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::UnityOpus::Decoder, ___disposedValue) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::UnityOpus::Decoder) == 0x30, "Size mismatch!");

} // namespace end def Meta::Voice::UnityOpus
