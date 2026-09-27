#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeTexture)
namespace GlobalNamespace {
struct NativeTexture_Format;
}
namespace GlobalNamespace {
struct NativeTexture_TextureCreateInfo;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace Liv::NGFX {
class NativeTexture;
}
// Write type traits
MARK_REF_T(::Liv::NGFX::NativeTexture*);
DEFINE_IL2CPP_CLASS(::Liv::NGFX::NativeTexture*, "Liv.NGFX", "NativeTexture");
// Dependencies System.IntPtr, System.Object
namespace Liv::NGFX {
// Is value type: false
// CS Name: Liv.NGFX.NativeTexture
class CORDL_TYPE NativeTexture : public ::System::Object {
public:
// Declarations
using Format = ::GlobalNamespace::NativeTexture_Format;

using TextureCreateInfo = ::GlobalNamespace::NativeTexture_TextureCreateInfo;

 __declspec(property(get=get_id)) uint32_t  id;

/// @brief Field m_context, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_context, put=__cordl_internal_set_m_context)) ::System::IntPtr  m_context;

/// @brief Field m_id, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_id, put=__cordl_internal_set_m_id)) uint32_t  m_id;

/// @brief Field m_texture, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_texture, put=__cordl_internal_set_m_texture)) ::UnityW<::UnityEngine::Texture2D>  m_texture;

/// @brief Field m_valid, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_valid, put=__cordl_internal_set_m_valid)) bool  m_valid;

 __declspec(property(get=get_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9cdbabc, size 0x18c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x9cdba90, size 0x8, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FormatToUnity, addr 0x9cdba2c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat FormatToUnity(::GlobalNamespace::NativeTexture_Format  fmt) ;

static inline ::Liv::NGFX::NativeTexture* New_ctor(::System::IntPtr  ctx, int32_t  width, int32_t  height, ::GlobalNamespace::NativeTexture_Format  format) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_context() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_context() ;

constexpr uint32_t const& __cordl_internal_get_m_id() const;

constexpr uint32_t& __cordl_internal_get_m_id() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_texture() ;

constexpr bool const& __cordl_internal_get_m_valid() const;

constexpr bool& __cordl_internal_get_m_valid() ;

constexpr void __cordl_internal_set_m_context(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_id(uint32_t  value) ;

constexpr void __cordl_internal_set_m_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_m_valid(bool  value) ;

/// @brief Method .ctor, addr 0x9cdb800, size 0x22c, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ctx, int32_t  width, int32_t  height, ::GlobalNamespace::NativeTexture_Format  format) ;

/// @brief Method get_id, addr 0x9cdbaac, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_id() ;

/// @brief Method get_texture, addr 0x9cdbab4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_texture() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method op_Implicit, addr 0x9cdba98, size 0x14, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> op_Implicit___UnityW___UnityEngine__Texture2D_(::Liv::NGFX::NativeTexture*  o) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeTexture(NativeTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeTexture(NativeTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24668};

/// @brief Field m_texture, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___m_texture;

/// @brief Field m_id, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___m_id;

/// @brief Field m_valid, offset: 0x1c, size: 0x1, def value: None
 bool  ___m_valid;

/// @brief Field m_context, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  ___m_context;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NGFX::NativeTexture, ___m_texture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::NGFX::NativeTexture, ___m_id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::NGFX::NativeTexture, ___m_valid) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Liv::NGFX::NativeTexture, ___m_context) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::NGFX::NativeTexture) == 0x28, "Size mismatch!");

} // namespace end def Liv::NGFX
