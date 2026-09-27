#pragma once
// IWYU pragma private; include "Modio/Images/ModioImageSource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Images/zzzz__ImageReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioImageSource_1)
namespace Modio::Images {
struct ImageReference;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Modio::Images {
template<typename TResolution>
class ModioImageSource_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Modio::Images::ModioImageSource_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::Images::ModioImageSource_1, "Modio.Images", "ModioImageSource`1");
// Dependencies Modio.Images.ImageReference, System.Object
namespace Modio::Images {
// cpp template
template<typename TResolution>
// Is value type: false
// CS Name: Modio.Images.ModioImageSource`1<TResolution>
class CORDL_TYPE ModioImageSource_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FileName, put=set_FileName)) ::StringW  FileName;

/// @brief Field <FileName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__FileName_k__BackingField, put=__cordl_internal_set__FileName_k__BackingField)) ::StringW  _FileName_k__BackingField;

/// @brief Field _isCachingLowestResolution, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCachingLowestResolution, put=__cordl_internal_set__isCachingLowestResolution)) bool  _isCachingLowestResolution;

/// @brief Field _resolutions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__resolutions, put=__cordl_internal_set__resolutions)) ::ArrayW<::Modio::Images::ImageReference>  _resolutions;

/// @brief Method CacheLowestResolutionOnDisk, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CacheLowestResolutionOnDisk(bool  shouldCache) ;

/// @brief Method GetAllReferences, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Images::ImageReference>* GetAllReferences() ;

/// @brief Method GetUri, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Modio::Images::ImageReference GetUri(TResolution  resolution) ;

static inline ::Modio::Images::ModioImageSource_1<TResolution>* New_ctor(::StringW  fileName, /* [ParamArray] */ ::ArrayW<::StringW>  links) ;

constexpr ::StringW const& __cordl_internal_get__FileName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__FileName_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isCachingLowestResolution() const;

constexpr bool& __cordl_internal_get__isCachingLowestResolution() ;

constexpr ::ArrayW<::Modio::Images::ImageReference> const& __cordl_internal_get__resolutions() const;

constexpr ::ArrayW<::Modio::Images::ImageReference>& __cordl_internal_get__resolutions() ;

constexpr void __cordl_internal_set__FileName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__isCachingLowestResolution(bool  value) ;

constexpr void __cordl_internal_set__resolutions(::ArrayW<::Modio::Images::ImageReference>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName, /* [ParamArray] */ ::ArrayW<::StringW>  links) ;

/// [CompilerGenerated]
/// @brief Method get_FileName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_FileName() ;

/// [CompilerGenerated]
/// @brief Method set_FileName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_FileName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioImageSource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioImageSource_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioImageSource_1(ModioImageSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioImageSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioImageSource_1(ModioImageSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17643};

/// [CompilerGenerated]
/// @brief Field <FileName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____FileName_k__BackingField;

/// @brief Field _resolutions, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Modio::Images::ImageReference>  ____resolutions;

/// @brief Field _isCachingLowestResolution, offset: 0x20, size: 0x1, def value: None
 bool  ____isCachingLowestResolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Images
