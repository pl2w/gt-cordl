#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_TexturePacker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_TexturePacker)
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
namespace DigitalOpus::MB::Core {
struct AtlasPadding;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_ImageAreaComparer;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_ImageHeightComparer;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_ImageWidthComparer;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_Image;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_ImgIDComparer;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_PixRect;
}
namespace GlobalNamespace {
struct MB2_TexturePacker_NodeType;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_Image;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_ImageAreaComparer;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_ImageHeightComparer;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_ImageWidthComparer;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_ImgIDComparer;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_PixRect;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePacker*);
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*);
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer*);
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer*);
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer*);
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer*);
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePacker*, "DigitalOpus.MB.Core", "MB2_TexturePacker");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*, "DigitalOpus.MB.Core", "MB2_TexturePacker/Image");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer*, "DigitalOpus.MB.Core", "MB2_TexturePacker/ImageAreaComparer");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer*, "DigitalOpus.MB.Core", "MB2_TexturePacker/ImageHeightComparer");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer*, "DigitalOpus.MB.Core", "MB2_TexturePacker/ImageWidthComparer");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer*, "DigitalOpus.MB.Core", "MB2_TexturePacker/ImgIDComparer");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*, "DigitalOpus.MB.Core", "MB2_TexturePacker/PixRect");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePacker
class CORDL_TYPE MB2_TexturePacker : public ::System::Object {
public:
// Declarations
using Image = ::DigitalOpus::MB::Core::MB2_TexturePacker_Image;

using ImageAreaComparer = ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer;

using ImageHeightComparer = ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer;

using ImageWidthComparer = ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer;

using ImgIDComparer = ::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer;

using PixRect = ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect;

using NodeType = ::GlobalNamespace::MB2_TexturePacker_NodeType;

/// @brief Field LOG_LEVEL, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field atlasMustBePowerOfTwo, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_atlasMustBePowerOfTwo, put=__cordl_internal_set_atlasMustBePowerOfTwo)) bool  atlasMustBePowerOfTwo;

/// @brief Method CeilToNearestPowerOfTwo, addr 0x9dc0edc, size 0x4c, virtual false, abstract: false, final false
static inline int32_t CeilToNearestPowerOfTwo(int32_t  x) ;

/// @brief Method ConvertToRectsWithoutPaddingAndNormalize01, addr 0x9dc144c, size 0x84, virtual false, abstract: false, final false
inline void ConvertToRectsWithoutPaddingAndNormalize01(::DigitalOpus::MB::Core::AtlasPackingResult*  rr, ::DigitalOpus::MB::Core::AtlasPadding  padding) ;

/// @brief Method GetRects, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  padding) ;

/// @brief Method GetRects, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, bool  doMultiAtlas) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePacker* New_ctor() ;

/// @brief Method RoundToNearestPositivePowerOfTwo, addr 0x9dc0dc4, size 0x118, virtual false, abstract: false, final false
static inline int32_t RoundToNearestPositivePowerOfTwo(int32_t  x) ;

/// @brief Method ScaleAtlasToFitMaxDim, addr 0x9dc0f28, size 0x524, virtual false, abstract: false, final false
inline bool ScaleAtlasToFitMaxDim(::UnityEngine::Vector2  rootWH, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*  images, int32_t  maxDimensionX, int32_t  maxDimensionY, ::DigitalOpus::MB::Core::AtlasPadding  padding, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY, ::by_ref<int32_t>  outW, ::by_ref<int32_t>  outH, ::by_ref<float_t>  padX, ::by_ref<float_t>  padY, ::by_ref<int32_t>  newMinSizeX, ::by_ref<int32_t>  newMinSizeY) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr bool const& __cordl_internal_get_atlasMustBePowerOfTwo() const;

constexpr bool& __cordl_internal_get_atlasMustBePowerOfTwo() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set_atlasMustBePowerOfTwo(bool  value) ;

/// @brief Method .ctor, addr 0x9dc14d0, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePacker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePacker(MB2_TexturePacker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePacker(MB2_TexturePacker const& ) = delete;

/// @brief Field MAX_ATLAS_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_ATLAS_SIZE{static_cast<int32_t>(0x2000)};

/// @brief Field MAX_RECURSION_DEPTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_RECURSION_DEPTH{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22760};

/// @brief Field LOG_LEVEL, offset: 0x10, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field atlasMustBePowerOfTwo, offset: 0x14, size: 0x1, def value: None
 bool  ___atlasMustBePowerOfTwo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker, ___LOG_LEVEL) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker, ___atlasMustBePowerOfTwo) == 0x14, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePacker) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePacker/ImageAreaComparer
class CORDL_TYPE MB2_TexturePacker_ImageAreaComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*() noexcept;

/// @brief Method Compare, addr 0x9dc1848, size 0x34, virtual true, abstract: false, final true
inline int32_t Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  y) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x9dc187c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* i___System__Collections__Generic__IComparer_1___DigitalOpus__MB__Core__MB2_TexturePacker_Image__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePacker_ImageAreaComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_ImageAreaComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePacker_ImageAreaComparer(MB2_TexturePacker_ImageAreaComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_ImageAreaComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePacker_ImageAreaComparer(MB2_TexturePacker_ImageAreaComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22759};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePacker/ImageWidthComparer
class CORDL_TYPE MB2_TexturePacker_ImageWidthComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*() noexcept;

/// @brief Method Compare, addr 0x9dc1814, size 0x2c, virtual true, abstract: false, final true
inline int32_t Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  y) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x9dc1840, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* i___System__Collections__Generic__IComparer_1___DigitalOpus__MB__Core__MB2_TexturePacker_Image__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePacker_ImageWidthComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_ImageWidthComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePacker_ImageWidthComparer(MB2_TexturePacker_ImageWidthComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_ImageWidthComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePacker_ImageWidthComparer(MB2_TexturePacker_ImageWidthComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22758};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePacker/ImageHeightComparer
class CORDL_TYPE MB2_TexturePacker_ImageHeightComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*() noexcept;

/// @brief Method Compare, addr 0x9dc17e0, size 0x2c, virtual true, abstract: false, final true
inline int32_t Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  y) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x9dc180c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* i___System__Collections__Generic__IComparer_1___DigitalOpus__MB__Core__MB2_TexturePacker_Image__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePacker_ImageHeightComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_ImageHeightComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePacker_ImageHeightComparer(MB2_TexturePacker_ImageHeightComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_ImageHeightComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePacker_ImageHeightComparer(MB2_TexturePacker_ImageHeightComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePacker/ImgIDComparer
class CORDL_TYPE MB2_TexturePacker_ImgIDComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*() noexcept;

/// @brief Method Compare, addr 0x9dc17ac, size 0x2c, virtual true, abstract: false, final true
inline int32_t Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  y) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x9dc17d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* i___System__Collections__Generic__IComparer_1___DigitalOpus__MB__Core__MB2_TexturePacker_Image__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePacker_ImgIDComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_ImgIDComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePacker_ImgIDComparer(MB2_TexturePacker_ImgIDComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_ImgIDComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePacker_ImgIDComparer(MB2_TexturePacker_ImgIDComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22756};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePacker/Image
class CORDL_TYPE MB2_TexturePacker_Image : public ::System::Object {
public:
// Declarations
/// @brief Field h, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_h, put=__cordl_internal_set_h)) int32_t  h;

/// @brief Field imgId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_imgId, put=__cordl_internal_set_imgId)) int32_t  imgId;

/// @brief Field w, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_w, put=__cordl_internal_set_w)) int32_t  w;

/// @brief Field x, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field y, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) int32_t  y;

static inline ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* New_ctor(int32_t  id, int32_t  tw, int32_t  th, ::DigitalOpus::MB::Core::AtlasPadding  padding, int32_t  minImageSizeX, int32_t  minImageSizeY) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* New_ctor(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  im) ;

constexpr int32_t const& __cordl_internal_get_h() const;

constexpr int32_t& __cordl_internal_get_h() ;

constexpr int32_t const& __cordl_internal_get_imgId() const;

constexpr int32_t& __cordl_internal_get_imgId() ;

constexpr int32_t const& __cordl_internal_get_w() const;

constexpr int32_t& __cordl_internal_get_w() ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_y() const;

constexpr int32_t& __cordl_internal_get_y() ;

constexpr void __cordl_internal_set_h(int32_t  value) ;

constexpr void __cordl_internal_set_imgId(int32_t  value) ;

constexpr void __cordl_internal_set_w(int32_t  value) ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_y(int32_t  value) ;

/// @brief Method .ctor, addr 0x9dc1700, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  id, int32_t  tw, int32_t  th, ::DigitalOpus::MB::Core::AtlasPadding  padding, int32_t  minImageSizeX, int32_t  minImageSizeY) ;

/// @brief Method .ctor, addr 0x9dc1770, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  im) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePacker_Image() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_Image", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePacker_Image(MB2_TexturePacker_Image && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_Image", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePacker_Image(MB2_TexturePacker_Image const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22755};

/// @brief Field imgId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___imgId;

/// @brief Field w, offset: 0x14, size: 0x4, def value: None
 int32_t  ___w;

/// @brief Field h, offset: 0x18, size: 0x4, def value: None
 int32_t  ___h;

/// @brief Field x, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field y, offset: 0x20, size: 0x4, def value: None
 int32_t  ___y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker_Image, ___imgId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker_Image, ___w) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker_Image, ___h) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker_Image, ___x) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker_Image, ___y) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePacker_Image) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePacker/PixRect
class CORDL_TYPE MB2_TexturePacker_PixRect : public ::System::Object {
public:
// Declarations
/// @brief Field h, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_h, put=__cordl_internal_set_h)) int32_t  h;

/// @brief Field w, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_w, put=__cordl_internal_set_w)) int32_t  w;

/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field y, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) int32_t  y;

static inline ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect* New_ctor() ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect* New_ctor(int32_t  xx, int32_t  yy, int32_t  ww, int32_t  hh) ;

/// @brief Method ToString, addr 0x9dc1530, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_h() const;

constexpr int32_t& __cordl_internal_get_h() ;

constexpr int32_t const& __cordl_internal_get_w() const;

constexpr int32_t& __cordl_internal_get_w() ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_y() const;

constexpr int32_t& __cordl_internal_get_y() ;

constexpr void __cordl_internal_set_h(int32_t  value) ;

constexpr void __cordl_internal_set_w(int32_t  value) ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_y(int32_t  value) ;

/// @brief Method .ctor, addr 0x9dc14e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9dc14f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  xx, int32_t  yy, int32_t  ww, int32_t  hh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePacker_PixRect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_PixRect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePacker_PixRect(MB2_TexturePacker_PixRect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePacker_PixRect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePacker_PixRect(MB2_TexturePacker_PixRect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22754};

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 int32_t  ___y;

/// @brief Field w, offset: 0x18, size: 0x4, def value: None
 int32_t  ___w;

/// @brief Field h, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___h;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect, ___w) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect, ___h) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
