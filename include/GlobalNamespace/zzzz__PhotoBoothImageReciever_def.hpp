#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotoBoothImageReciever.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotoBoothImageReciever)
namespace GlobalNamespace {
class PhotoBoothCamera;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
class PhotoBoothImageReciever;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotoBoothImageReciever*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotoBoothImageReciever*, "", "PhotoBoothImageReciever");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotoBoothImageReciever
class CORDL_TYPE PhotoBoothImageReciever : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field index, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field photoBoothCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_photoBoothCamera, put=__cordl_internal_set_photoBoothCamera)) ::UnityW<::GlobalNamespace::PhotoBoothCamera>  photoBoothCamera;

static inline ::GlobalNamespace::PhotoBoothImageReciever* New_ctor() ;

/// @brief Method OnDisable, addr 0x57118a8, size 0xe4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x571172c, size 0xe4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::UnityW<::GlobalNamespace::PhotoBoothCamera> const& __cordl_internal_get_photoBoothCamera() const;

constexpr ::UnityW<::GlobalNamespace::PhotoBoothCamera>& __cordl_internal_get_photoBoothCamera() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_photoBoothCamera(::UnityW<::GlobalNamespace::PhotoBoothCamera>  value) ;

/// @brief Method .ctor, addr 0x571198c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method photoBoothCamera_OnCapture, addr 0x5711810, size 0x98, virtual false, abstract: false, final false
inline void photoBoothCamera_OnCapture(::UnityEngine::Texture*  texture, int32_t  i) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoBoothImageReciever() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoBoothImageReciever", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoBoothImageReciever(PhotoBoothImageReciever && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoBoothImageReciever", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoBoothImageReciever(PhotoBoothImageReciever const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1176};

/// [SerializeField]
/// @brief Field photoBoothCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PhotoBoothCamera>  ___photoBoothCamera;

/// [SerializeField]
/// @brief Field index, offset: 0x28, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotoBoothImageReciever, ___photoBoothCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothImageReciever, ___index) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotoBoothImageReciever) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
