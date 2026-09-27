#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerAudioClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerAudioClip)
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerAudioClip;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::DownloadHandlerAudioClip*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::DownloadHandlerAudioClip*, "UnityEngine.Networking", "DownloadHandlerAudioClip");
// [NativeHeader("Modules/UnityWebRequestAudio/Public/DownloadHandlerAudioClip.h")]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Networking.DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerAudioClip
class CORDL_TYPE DownloadHandlerAudioClip : public ::UnityEngine::Networking::DownloadHandler {
public:
// Declarations
/// @brief Field m_NativeData, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_NativeData, put=__cordl_internal_set_m_NativeData)) ::Unity::Collections::NativeArray_1<uint8_t>  m_NativeData;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_NativeData() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_NativeData() ;

constexpr void __cordl_internal_set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DownloadHandlerAudioClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadHandlerAudioClip(DownloadHandlerAudioClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadHandlerAudioClip(DownloadHandlerAudioClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32913};

/// @brief Field m_NativeData, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___m_NativeData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerAudioClip, ___m_NativeData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Networking::DownloadHandlerAudioClip) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Networking
