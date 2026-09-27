#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaveTextureFileFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureUtils)
namespace GlobalNamespace {
struct SaveTextureFileFormat;
}
namespace GlobalNamespace {
class TextureUtils___c__DisplayClass2_0;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureUtils;
}
namespace GlobalNamespace {
class TextureUtils___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextureUtils*);
MARK_REF_T(::GlobalNamespace::TextureUtils___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureUtils*, "", "TextureUtils");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureUtils___c__DisplayClass2_0*, "", "TextureUtils/<>c__DisplayClass2_0");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureUtils
class CORDL_TYPE TextureUtils : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::GlobalNamespace::TextureUtils___c__DisplayClass2_0;

/// @brief Method CalcAverageColor, addr 0x5b19d5c, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 CalcAverageColor(::UnityEngine::Texture2D*  tex) ;

/// @brief Method CreateCopy, addr 0x5b1a120, size 0x224, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> CreateCopy(::UnityEngine::Texture2D*  tex) ;

/// [Extension]
/// @brief Method GetTexelSize, addr 0x5b19c2c, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetTexelSize(::UnityEngine::Texture*  tex) ;

/// @brief Method SaveToFile, addr 0x5b19e4c, size 0x2cc, virtual false, abstract: false, final false
static inline void SaveToFile(::UnityEngine::Texture*  source, ::StringW  filePath, int32_t  width, int32_t  height, ::GlobalNamespace::SaveTextureFileFormat  fileFormat, int32_t  jpgQuality, bool  asynchronous, ::System::Action_1<bool>*  done) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureUtils(TextureUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureUtils(TextureUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3569};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TextureUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies SaveTextureFileFormat, System.Object, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureUtils/<>c__DisplayClass2_0
class CORDL_TYPE TextureUtils___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field done, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_done, put=__cordl_internal_set_done)) ::System::Action_1<bool>*  done;

/// @brief Field fileFormat, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_fileFormat, put=__cordl_internal_set_fileFormat)) ::GlobalNamespace::SaveTextureFileFormat  fileFormat;

/// @brief Field filePath, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_filePath, put=__cordl_internal_set_filePath)) ::StringW  filePath;

/// @brief Field height, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field jpgQuality, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_jpgQuality, put=__cordl_internal_set_jpgQuality)) int32_t  jpgQuality;

/// @brief Field narray, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_narray, put=__cordl_internal_set_narray)) ::Unity::Collections::NativeArray_1<uint8_t>  narray;

/// @brief Field resizeRT, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_resizeRT, put=__cordl_internal_set_resizeRT)) ::UnityW<::UnityEngine::RenderTexture>  resizeRT;

/// @brief Field width, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

static inline ::GlobalNamespace::TextureUtils___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <SaveToFile>b__0, addr 0x5b1a344, size 0x224, virtual false, abstract: false, final false
inline void _SaveToFile_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest  request) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_done() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_done() ;

constexpr ::GlobalNamespace::SaveTextureFileFormat const& __cordl_internal_get_fileFormat() const;

constexpr ::GlobalNamespace::SaveTextureFileFormat& __cordl_internal_get_fileFormat() ;

constexpr ::StringW const& __cordl_internal_get_filePath() const;

constexpr ::StringW& __cordl_internal_get_filePath() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr int32_t const& __cordl_internal_get_jpgQuality() const;

constexpr int32_t& __cordl_internal_get_jpgQuality() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_narray() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_narray() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_resizeRT() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_resizeRT() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_done(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_fileFormat(::GlobalNamespace::SaveTextureFileFormat  value) ;

constexpr void __cordl_internal_set_filePath(::StringW  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_jpgQuality(int32_t  value) ;

constexpr void __cordl_internal_set_narray(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_resizeRT(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b1a118, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureUtils___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureUtils___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureUtils___c__DisplayClass2_0(TextureUtils___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureUtils___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureUtils___c__DisplayClass2_0(TextureUtils___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3568};

/// @brief Field fileFormat, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SaveTextureFileFormat  ___fileFormat;

/// @brief Field narray, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___narray;

/// @brief Field resizeRT, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___resizeRT;

/// @brief Field width, offset: 0x30, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x34, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field jpgQuality, offset: 0x38, size: 0x4, def value: None
 int32_t  ___jpgQuality;

/// @brief Field filePath, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___filePath;

/// @brief Field done, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___done;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureUtils___c__DisplayClass2_0, ___fileFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureUtils___c__DisplayClass2_0, ___narray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureUtils___c__DisplayClass2_0, ___resizeRT) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureUtils___c__DisplayClass2_0, ___width) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureUtils___c__DisplayClass2_0, ___height) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureUtils___c__DisplayClass2_0, ___jpgQuality) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureUtils___c__DisplayClass2_0, ___filePath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureUtils___c__DisplayClass2_0, ___done) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureUtils___c__DisplayClass2_0) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
