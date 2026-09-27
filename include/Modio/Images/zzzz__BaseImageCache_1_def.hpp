#pragma once
// IWYU pragma private; include "Modio/Images/BaseImageCache_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Images/zzzz__BaseImageCache_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseImageCache_1)
namespace GlobalNamespace {
template<typename T>
struct BaseImageCache_1__DownloadImageInternal_d__5;
}
namespace GlobalNamespace {
template<typename T>
struct BaseImageCache_1__LoadFromDiskCache_d__6;
}
namespace Modio::Images {
struct ImageReference;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Images {
template<typename T>
class BaseImageCache_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Modio::Images::BaseImageCache_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::Images::BaseImageCache_1, "Modio.Images", "BaseImageCache`1");
// Dependencies Modio.Images.BaseImageCache
namespace Modio::Images {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Modio.Images.BaseImageCache`1<T>
class CORDL_TYPE BaseImageCache_1 : public ::Modio::Images::BaseImageCache {
public:
// Declarations
using _DownloadImageInternal_d__5 = ::GlobalNamespace::BaseImageCache_1__DownloadImageInternal_d__5<T>;

using _LoadFromDiskCache_d__6 = ::GlobalNamespace::BaseImageCache_1__LoadFromDiskCache_d__6<T>;

/// @brief Field _cache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cache, put=__cordl_internal_set__cache)) ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::ValueTuple_2<::Modio::Error*,T>>*  _cache;

/// @brief Field _ongoingDownloads, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ongoingDownloads, put=__cordl_internal_set__ongoingDownloads)) ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>*  _ongoingDownloads;

/// @brief Method CacheToDiskInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool CacheToDiskInternal(::Modio::Images::ImageReference  imageReference) ;

/// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Convert(::ArrayW<uint8_t>  rawBytes) ;

/// @brief Method ConvertToBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> ConvertToBytes(T  image) ;

/// @brief Method DownloadImage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* DownloadImage(::Modio::Images::ImageReference  uri) ;

/// [AsyncStateMachine(typeof(Modio.Images.BaseImageCache`1::<DownloadImageInternal>d__5<T>))]
/// @brief Method DownloadImageInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* DownloadImageInternal(::Modio::Images::ImageReference  uri) ;

/// @brief Method GetCachedImage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetCachedImage(::Modio::Images::ImageReference  uri) ;

/// @brief Method GetFirstCachedImage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetFirstCachedImage(::System::Collections::Generic::IEnumerable_1<::Modio::Images::ImageReference>*  imageReferences) ;

/// [AsyncStateMachine(typeof(Modio.Images.BaseImageCache`1::<LoadFromDiskCache>d__6<T>))]
/// @brief Method LoadFromDiskCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<T>* LoadFromDiskCache(::Modio::Images::ImageReference  imageReference) ;

static inline ::Modio::Images::BaseImageCache_1<T>* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::ValueTuple_2<::Modio::Error*,T>>* const& __cordl_internal_get__cache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::ValueTuple_2<::Modio::Error*,T>>*& __cordl_internal_get__cache() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>* const& __cordl_internal_get__ongoingDownloads() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>*& __cordl_internal_get__ongoingDownloads() ;

constexpr void __cordl_internal_set__cache(::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::ValueTuple_2<::Modio::Error*,T>>*  value) ;

constexpr void __cordl_internal_set__ongoingDownloads(::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseImageCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseImageCache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseImageCache_1(BaseImageCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseImageCache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseImageCache_1(BaseImageCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17637};

/// @brief Field _cache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::ValueTuple_2<::Modio::Error*,T>>*  ____cache;

/// @brief Field _ongoingDownloads, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>*  ____ongoingDownloads;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Images
