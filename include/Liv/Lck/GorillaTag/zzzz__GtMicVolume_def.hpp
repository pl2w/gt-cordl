#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtMicVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GtMicVolume)
namespace Liv::Lck::GorillaTag {
class GtAudioButton;
}
namespace Liv::Lck {
class ILckService;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtMicVolume;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtMicVolume*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtMicVolume*, "Liv.Lck.GorillaTag", "GtMicVolume");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtMicVolume
class CORDL_TYPE GtMicVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioButton, put=__cordl_internal_set__audioButton)) ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>  _audioButton;

/// @brief Field _incomingVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__incomingVolume, put=__cordl_internal_set__incomingVolume)) float_t  _incomingVolume;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

static inline ::Liv::Lck::GorillaTag::GtMicVolume* New_ctor() ;

/// @brief Method Update, addr 0x9d239ac, size 0xe8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton> const& __cordl_internal_get__audioButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>& __cordl_internal_get__audioButton() ;

constexpr float_t const& __cordl_internal_get__incomingVolume() const;

constexpr float_t& __cordl_internal_get__incomingVolume() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr void __cordl_internal_set__audioButton(::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>  value) ;

constexpr void __cordl_internal_set__incomingVolume(float_t  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

/// @brief Method .ctor, addr 0x9d23a94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtMicVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtMicVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtMicVolume(GtMicVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtMicVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtMicVolume(GtMicVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29633};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [SerializeField]
/// @brief Field _incomingVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ____incomingVolume;

/// [SerializeField]
/// @brief Field _audioButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>  ____audioButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtMicVolume, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtMicVolume, ____incomingVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtMicVolume, ____audioButton) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtMicVolume) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
