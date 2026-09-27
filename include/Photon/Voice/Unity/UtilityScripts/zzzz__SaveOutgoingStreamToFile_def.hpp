#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/SaveOutgoingStreamToFile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveOutgoingStreamToFile)
namespace CSCore::Codecs::WAV {
class WaveWriter;
}
namespace Photon::Voice::Unity::UtilityScripts {
class SaveOutgoingStreamToFile_OutgoingStreamSaverFloat;
}
namespace Photon::Voice::Unity::UtilityScripts {
class SaveOutgoingStreamToFile_OutgoingStreamSaverShort;
}
namespace Photon::Voice::Unity {
class PhotonVoiceCreatedParams;
}
namespace Photon::Voice {
template<typename T>
class IProcessor_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class SaveOutgoingStreamToFile;
}
namespace Photon::Voice::Unity::UtilityScripts {
class SaveOutgoingStreamToFile_OutgoingStreamSaverFloat;
}
namespace Photon::Voice::Unity::UtilityScripts {
class SaveOutgoingStreamToFile_OutgoingStreamSaverShort;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*);
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat*);
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*, "Photon.Voice.Unity.UtilityScripts", "SaveOutgoingStreamToFile");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat*, "Photon.Voice.Unity.UtilityScripts", "SaveOutgoingStreamToFile/OutgoingStreamSaverFloat");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort*, "Photon.Voice.Unity.UtilityScripts", "SaveOutgoingStreamToFile/OutgoingStreamSaverShort");
// [RequireComponent(typeof(Photon.Voice.Unity.Recorder))]
// [DisallowMultipleComponent]
// Dependencies Photon.Voice.Unity.VoiceComponent
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile
class CORDL_TYPE SaveOutgoingStreamToFile : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
using OutgoingStreamSaverFloat = ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat;

using OutgoingStreamSaverShort = ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort;

/// @brief Field wavWriter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_wavWriter, put=__cordl_internal_set_wavWriter)) ::CSCore::Codecs::WAV::WaveWriter*  wavWriter;

/// @brief Method GetFilePath, addr 0xa78d02c, size 0x15c, virtual false, abstract: false, final false
inline ::StringW GetFilePath() ;

static inline ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile* New_ctor() ;

/// @brief Method PhotonVoiceCreated, addr 0xa78cbd8, size 0x454, virtual false, abstract: false, final false
inline void PhotonVoiceCreated(::Photon::Voice::Unity::PhotonVoiceCreatedParams*  photonVoiceCreatedParams) ;

/// @brief Method PhotonVoiceRemoved, addr 0xa78d1e8, size 0x104, virtual false, abstract: false, final false
inline void PhotonVoiceRemoved() ;

constexpr ::CSCore::Codecs::WAV::WaveWriter* const& __cordl_internal_get_wavWriter() const;

constexpr ::CSCore::Codecs::WAV::WaveWriter*& __cordl_internal_get_wavWriter() ;

constexpr void __cordl_internal_set_wavWriter(::CSCore::Codecs::WAV::WaveWriter*  value) ;

/// @brief Method .ctor, addr 0xa78d2ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveOutgoingStreamToFile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveOutgoingStreamToFile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveOutgoingStreamToFile(SaveOutgoingStreamToFile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveOutgoingStreamToFile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveOutgoingStreamToFile(SaveOutgoingStreamToFile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28906};

/// @brief Field wavWriter, offset: 0x30, size: 0x8, def value: None
 ::CSCore::Codecs::WAV::WaveWriter*  ___wavWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile, ___wavWriter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile) == 0x38, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
// Dependencies System.Object
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort
class CORDL_TYPE SaveOutgoingStreamToFile_OutgoingStreamSaverShort : public ::System::Object {
public:
// Declarations
/// @brief Field wavWriter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_wavWriter, put=__cordl_internal_set_wavWriter)) ::CSCore::Codecs::WAV::WaveWriter*  wavWriter;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr operator  ::Photon::Voice::IProcessor_1<int16_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa78d3cc, size 0x2c, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort* New_ctor(::CSCore::Codecs::WAV::WaveWriter*  waveWriter) ;

/// @brief Method Process, addr 0xa78d354, size 0x78, virtual true, abstract: false, final true
inline ::ArrayW<int16_t> Process(::ArrayW<int16_t>  buf) ;

constexpr ::CSCore::Codecs::WAV::WaveWriter* const& __cordl_internal_get_wavWriter() const;

constexpr ::CSCore::Codecs::WAV::WaveWriter*& __cordl_internal_get_wavWriter() ;

constexpr void __cordl_internal_set_wavWriter(::CSCore::Codecs::WAV::WaveWriter*  value) ;

/// @brief Method .ctor, addr 0xa78d1b8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::CSCore::Codecs::WAV::WaveWriter*  waveWriter) ;

/// @brief Convert to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr ::Photon::Voice::IProcessor_1<int16_t>* i___Photon__Voice__IProcessor_1_int16_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveOutgoingStreamToFile_OutgoingStreamSaverShort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveOutgoingStreamToFile_OutgoingStreamSaverShort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveOutgoingStreamToFile_OutgoingStreamSaverShort(SaveOutgoingStreamToFile_OutgoingStreamSaverShort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveOutgoingStreamToFile_OutgoingStreamSaverShort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveOutgoingStreamToFile_OutgoingStreamSaverShort(SaveOutgoingStreamToFile_OutgoingStreamSaverShort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28905};

/// @brief Field wavWriter, offset: 0x10, size: 0x8, def value: None
 ::CSCore::Codecs::WAV::WaveWriter*  ___wavWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort, ___wavWriter) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort) == 0x18, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
// Dependencies System.Object
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat
class CORDL_TYPE SaveOutgoingStreamToFile_OutgoingStreamSaverFloat : public ::System::Object {
public:
// Declarations
/// @brief Field wavWriter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_wavWriter, put=__cordl_internal_set_wavWriter)) ::CSCore::Codecs::WAV::WaveWriter*  wavWriter;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<float_t>"
constexpr operator  ::Photon::Voice::IProcessor_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa78d328, size 0x2c, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat* New_ctor(::CSCore::Codecs::WAV::WaveWriter*  waveWriter) ;

/// @brief Method Process, addr 0xa78d2f4, size 0x34, virtual true, abstract: false, final true
inline ::ArrayW<float_t> Process(::ArrayW<float_t>  buf) ;

constexpr ::CSCore::Codecs::WAV::WaveWriter* const& __cordl_internal_get_wavWriter() const;

constexpr ::CSCore::Codecs::WAV::WaveWriter*& __cordl_internal_get_wavWriter() ;

constexpr void __cordl_internal_set_wavWriter(::CSCore::Codecs::WAV::WaveWriter*  value) ;

/// @brief Method .ctor, addr 0xa78d188, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::CSCore::Codecs::WAV::WaveWriter*  waveWriter) ;

/// @brief Convert to "::Photon::Voice::IProcessor_1<float_t>"
constexpr ::Photon::Voice::IProcessor_1<float_t>* i___Photon__Voice__IProcessor_1_float_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveOutgoingStreamToFile_OutgoingStreamSaverFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveOutgoingStreamToFile_OutgoingStreamSaverFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveOutgoingStreamToFile_OutgoingStreamSaverFloat(SaveOutgoingStreamToFile_OutgoingStreamSaverFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveOutgoingStreamToFile_OutgoingStreamSaverFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveOutgoingStreamToFile_OutgoingStreamSaverFloat(SaveOutgoingStreamToFile_OutgoingStreamSaverFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28904};

/// @brief Field wavWriter, offset: 0x10, size: 0x8, def value: None
 ::CSCore::Codecs::WAV::WaveWriter*  ___wavWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat, ___wavWriter) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat) == 0x18, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
