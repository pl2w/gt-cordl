#pragma once
// IWYU pragma private; include "Modio/Images/ImageReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageReference)
namespace Modio::Images {
class ImageReference_UrlEqualityComparer;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::Images {
class ImageReference_UrlEqualityComparer;
}
namespace Modio::Images {
struct ImageReference;
}
// Write type traits
MARK_REF_T(::Modio::Images::ImageReference_UrlEqualityComparer*);
MARK_VAL_T(::Modio::Images::ImageReference);
DEFINE_IL2CPP_CLASS(::Modio::Images::ImageReference_UrlEqualityComparer*, "Modio.Images", "ImageReference/UrlEqualityComparer");
DEFINE_IL2CPP_CLASS(::Modio::Images::ImageReference, "Modio.Images", "ImageReference");
// Dependencies 
namespace Modio::Images {
// Is value type: true
// CS Name: Modio.Images.ImageReference
struct CORDL_TYPE ImageReference {
public:
// Declarations
using UrlEqualityComparer = ::Modio::Images::ImageReference_UrlEqualityComparer;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Url, put=set_Url)) ::StringW  Url;

/// @brief Convert operator to "::System::IEquatable_1<::Modio::Images::ImageReference>"
constexpr operator  ::System::IEquatable_1<::Modio::Images::ImageReference>*() ;

/// @brief Method Equals, addr 0xa040914, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa0408ec, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::Modio::Images::ImageReference  other) ;

/// @brief Method GetHashCode, addr 0xa040994, size 0x18, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0xa0408dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  url) ;

/// @brief Method get_IsValid, addr 0xa0408ac, size 0x20, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Url, addr 0xa0408cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Url() ;

/// @brief Convert to "::System::IEquatable_1<::Modio::Images::ImageReference>"
constexpr ::System::IEquatable_1<::Modio::Images::ImageReference>* i___System__IEquatable_1___Modio__Images__ImageReference_() ;

/// @brief Method op_Equality, addr 0xa0408e4, size 0x8, virtual false, abstract: false, final false
static inline bool op_Equality(::Modio::Images::ImageReference  left, ::Modio::Images::ImageReference  right) ;

/// @brief Method op_Inequality, addr 0xa0408f8, size 0x1c, virtual false, abstract: false, final false
static inline bool op_Inequality(::Modio::Images::ImageReference  left, ::Modio::Images::ImageReference  right) ;

/// [CompilerGenerated]
/// @brief Method set_Url, addr 0xa0408d4, size 0x8, virtual false, abstract: false, final false
inline void set_Url(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ImageReference() ;

// Ctor Parameters [CppParam { name: "_Url_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ImageReference(::StringW  _Url_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17640};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Url>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _Url_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Images::ImageReference, _Url_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Images::ImageReference) == 0x8, "Size mismatch!");

} // namespace end def Modio::Images
// Dependencies System.Object
namespace Modio::Images {
// Is value type: false
// CS Name: Modio.Images.ImageReference/UrlEqualityComparer
class CORDL_TYPE ImageReference_UrlEqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>*() noexcept;

/// @brief Method Equals, addr 0xa0409ac, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Modio::Images::ImageReference  x, ::Modio::Images::ImageReference  y) ;

/// @brief Method GetHashCode, addr 0xa0409bc, size 0x20, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Modio::Images::ImageReference  obj) ;

static inline ::Modio::Images::ImageReference_UrlEqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xa0409dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>* i___System__Collections__Generic__IEqualityComparer_1___Modio__Images__ImageReference_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageReference_UrlEqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageReference_UrlEqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageReference_UrlEqualityComparer(ImageReference_UrlEqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageReference_UrlEqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageReference_UrlEqualityComparer(ImageReference_UrlEqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17639};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Images::ImageReference_UrlEqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Modio::Images
