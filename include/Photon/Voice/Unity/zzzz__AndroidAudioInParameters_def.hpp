#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AndroidAudioInParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AndroidAudioInParameters)
// Forward declare root types
namespace Photon::Voice::Unity {
class AndroidAudioInParameters;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::AndroidAudioInParameters*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::AndroidAudioInParameters*, "Photon.Voice.Unity", "AndroidAudioInParameters");
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.AndroidAudioInParameters
class CORDL_TYPE AndroidAudioInParameters : public ::System::Object {
public:
// Declarations
/// @brief Field EnableAEC, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableAEC, put=__cordl_internal_set_EnableAEC)) bool  EnableAEC;

/// @brief Field EnableAGC, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableAGC, put=__cordl_internal_set_EnableAGC)) bool  EnableAGC;

/// @brief Field EnableNS, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableNS, put=__cordl_internal_set_EnableNS)) bool  EnableNS;

static inline ::Photon::Voice::Unity::AndroidAudioInParameters* New_ctor() ;

constexpr bool const& __cordl_internal_get_EnableAEC() const;

constexpr bool& __cordl_internal_get_EnableAEC() ;

constexpr bool const& __cordl_internal_get_EnableAGC() const;

constexpr bool& __cordl_internal_get_EnableAGC() ;

constexpr bool const& __cordl_internal_get_EnableNS() const;

constexpr bool& __cordl_internal_get_EnableNS() ;

constexpr void __cordl_internal_set_EnableAEC(bool  value) ;

constexpr void __cordl_internal_set_EnableAGC(bool  value) ;

constexpr void __cordl_internal_set_EnableNS(bool  value) ;

/// @brief Method .ctor, addr 0xa75a06c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidAudioInParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidAudioInParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidAudioInParameters(AndroidAudioInParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAudioInParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidAudioInParameters(AndroidAudioInParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28508};

/// @brief Field EnableAEC, offset: 0x10, size: 0x1, def value: None
 bool  ___EnableAEC;

/// @brief Field EnableAGC, offset: 0x11, size: 0x1, def value: None
 bool  ___EnableAGC;

/// @brief Field EnableNS, offset: 0x12, size: 0x1, def value: None
 bool  ___EnableNS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInParameters, ___EnableAEC) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInParameters, ___EnableAGC) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInParameters, ___EnableNS) == 0x12, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::AndroidAudioInParameters) == 0x18, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
