#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LCKMicVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LCKMicVolume)
namespace Liv::Lck {
class ILckService;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LCKMicVolume;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LCKMicVolume*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LCKMicVolume*, "Liv.Lck.Tablet", "LCKMicVolume");
// [DefaultExecutionOrder(1000)]
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LCKMicVolume
class CORDL_TYPE LCKMicVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _incomingVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__incomingVolume, put=__cordl_internal_set__incomingVolume)) float_t  _incomingVolume;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _micVolumeImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__micVolumeImage, put=__cordl_internal_set__micVolumeImage)) ::UnityW<::UnityEngine::UI::Image>  _micVolumeImage;

/// @brief Method Awake, addr 0x9d57a20, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Liv::Lck::Tablet::LCKMicVolume* New_ctor() ;

/// @brief Method Update, addr 0x9d57ab0, size 0x134, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__incomingVolume() const;

constexpr float_t& __cordl_internal_get__incomingVolume() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__micVolumeImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__micVolumeImage() ;

constexpr void __cordl_internal_set__incomingVolume(float_t  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__micVolumeImage(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x9d57be4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LCKMicVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LCKMicVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LCKMicVolume(LCKMicVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LCKMicVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LCKMicVolume(LCKMicVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24934};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [SerializeField]
/// @brief Field _incomingVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ____incomingVolume;

/// [SerializeField]
/// @brief Field _micVolumeImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____micVolumeImage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LCKMicVolume, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKMicVolume, ____incomingVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKMicVolume, ____micVolumeImage) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LCKMicVolume) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
