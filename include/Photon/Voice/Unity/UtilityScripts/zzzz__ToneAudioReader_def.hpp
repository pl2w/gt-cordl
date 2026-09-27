#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/ToneAudioReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ToneAudioReader)
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
template<typename T>
class IAudioReader_1;
}
namespace Photon::Voice {
template<typename T>
class IDataReader_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class ToneAudioReader;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*, "Photon.Voice.Unity.UtilityScripts", "ToneAudioReader");
// Dependencies System.Object
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.ToneAudioReader
class CORDL_TYPE ToneAudioReader : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(get=get_SamplingRate)) int32_t  SamplingRate;

/// @brief Field k, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_k, put=__cordl_internal_set_k)) double_t  k;

/// @brief Field timeSamples, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeSamples, put=__cordl_internal_set_timeSamples)) int64_t  timeSamples;

/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr operator  ::Photon::Voice::IAudioReader_1<float_t>*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IDataReader_1<float_t>"
constexpr operator  ::Photon::Voice::IDataReader_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa78d644, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::Unity::UtilityScripts::ToneAudioReader* New_ctor() ;

/// @brief Method Read, addr 0xa78d648, size 0x2c0, virtual true, abstract: false, final true
inline bool Read(::ArrayW<float_t>  buf) ;

constexpr double_t const& __cordl_internal_get_k() const;

constexpr double_t& __cordl_internal_get_k() ;

constexpr int64_t const& __cordl_internal_get_timeSamples() const;

constexpr int64_t& __cordl_internal_get_timeSamples() ;

constexpr void __cordl_internal_set_k(double_t  value) ;

constexpr void __cordl_internal_set_timeSamples(int64_t  value) ;

/// @brief Method .ctor, addr 0xa78d600, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Channels, addr 0xa78d634, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Channels() ;

/// @brief Method get_Error, addr 0xa78d63c, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// @brief Method get_SamplingRate, addr 0xa78d62c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_SamplingRate() ;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr ::Photon::Voice::IAudioReader_1<float_t>* i___Photon__Voice__IAudioReader_1_float_t_() noexcept;

/// @brief Convert to "::Photon::Voice::IDataReader_1<float_t>"
constexpr ::Photon::Voice::IDataReader_1<float_t>* i___Photon__Voice__IDataReader_1_float_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToneAudioReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToneAudioReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToneAudioReader(ToneAudioReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToneAudioReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToneAudioReader(ToneAudioReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28909};

/// @brief Field k, offset: 0x10, size: 0x8, def value: None
 double_t  ___k;

/// @brief Field timeSamples, offset: 0x18, size: 0x8, def value: None
 int64_t  ___timeSamples;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::ToneAudioReader, ___k) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::ToneAudioReader, ___timeSamples) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::ToneAudioReader) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
