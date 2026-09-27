#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNativeAlloc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__ImageBufferNative_def.hpp"
CORDL_MODULE_EXPORT(ImageBufferNativeAlloc)
namespace Photon::Voice {
struct ImageBufferInfo;
}
namespace Photon::Voice {
template<typename T>
class ImageBufferNativePool_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class ImageBufferNativeAlloc;
}
// Write type traits
MARK_REF_T(::Photon::Voice::ImageBufferNativeAlloc*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::ImageBufferNativeAlloc*, "Photon.Voice", "ImageBufferNativeAlloc");
// Dependencies Photon.Voice.ImageBufferNative
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.ImageBufferNativeAlloc
class CORDL_TYPE ImageBufferNativeAlloc : public ::Photon::Voice::ImageBufferNative {
public:
// Declarations
/// @brief Field pool, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*  pool;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa753c08, size 0xe4, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::Photon::Voice::ImageBufferNativeAlloc* New_ctor(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*  pool, ::Photon::Voice::ImageBufferInfo  info) ;

/// @brief Method Release, addr 0xa753bec, size 0x1c, virtual true, abstract: false, final false
inline void Release() ;

constexpr ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>* const& __cordl_internal_get_pool() const;

constexpr ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*& __cordl_internal_get_pool() ;

constexpr void __cordl_internal_set_pool(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*  value) ;

/// @brief Method .ctor, addr 0xa7539fc, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*  pool, ::Photon::Voice::ImageBufferInfo  info) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageBufferNativeAlloc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNativeAlloc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageBufferNativeAlloc(ImageBufferNativeAlloc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNativeAlloc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageBufferNativeAlloc(ImageBufferNativeAlloc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28482};

/// @brief Field pool, offset: 0x60, size: 0x8, def value: None
 ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*  ___pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::ImageBufferNativeAlloc, ___pool) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::ImageBufferNativeAlloc) == 0x68, "Size mismatch!");

} // namespace end def Photon::Voice
