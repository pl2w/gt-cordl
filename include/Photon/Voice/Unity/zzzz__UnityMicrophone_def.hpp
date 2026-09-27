#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UnityMicrophone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityMicrophone)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class UnityMicrophone;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UnityMicrophone*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UnityMicrophone*, "Photon.Voice.Unity", "UnityMicrophone");
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.UnityMicrophone
class CORDL_TYPE UnityMicrophone : public ::System::Object {
public:
// Declarations
/// @brief Method End, addr 0xa75faa4, size 0x8, virtual false, abstract: false, final false
static inline void End(::StringW  deviceName) ;

/// @brief Method GetDeviceCaps, addr 0xa75faac, size 0x8, virtual false, abstract: false, final false
static inline void GetDeviceCaps(::StringW  deviceName, ::by_ref<int32_t>  minFreq, ::by_ref<int32_t>  maxFreq) ;

/// @brief Method GetPosition, addr 0xa75fab4, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetPosition(::StringW  deviceName) ;

/// @brief Method IsRecording, addr 0xa75fabc, size 0x8, virtual false, abstract: false, final false
static inline bool IsRecording(::StringW  deviceName) ;

/// @brief Method Start, addr 0xa75fac4, size 0x8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Start(::StringW  deviceName, bool  loop, int32_t  lengthSec, int32_t  frequency) ;

/// @brief Method get_devices, addr 0xa75fa9c, size 0x8, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_devices() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityMicrophone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityMicrophone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityMicrophone(UnityMicrophone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityMicrophone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityMicrophone(UnityMicrophone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28519};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Unity::UnityMicrophone) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
