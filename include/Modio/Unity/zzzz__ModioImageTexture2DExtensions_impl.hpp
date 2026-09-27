#pragma once
// IWYU pragma private; include "Modio/Unity/ModioImageTexture2DExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/zzzz__ModioImageTexture2DExtensions_def.hpp"
#include "Modio/Images/zzzz__ImageReference_def.hpp"
#include "Modio/Images/zzzz__ModioImageSource_1_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Modio::Unity::ModioImageTexture2DExtensions.DownloadAsTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>* (*)(::Modio::Images::ImageReference)>(&::Modio::Unity::ModioImageTexture2DExtensions::DownloadAsTexture2D)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f8fdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioImageTexture2DExtensions*>(),
                        {"DownloadAsTexture2D", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>* Modio::Unity::ModioImageTexture2DExtensions::DownloadAsTexture2D(::Modio::Images::ImageReference  imageReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioImageTexture2DExtensions*>(),
                        {"DownloadAsTexture2D", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>*>(nullptr, ___internal_method, imageReference);
}
template<typename TResolution>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>* Modio::Unity::ModioImageTexture2DExtensions::DownloadAsTexture2D(::Modio::Images::ModioImageSource_1<TResolution>*  imageSource, TResolution  resolution)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::ModioImageTexture2DExtensions*>(),
                    {"DownloadAsTexture2D", {::i2c::class_of<TResolution>()}, {::i2c::type_of<::Modio::Images::ModioImageSource_1<TResolution>*>(), ::i2c::type_of<TResolution>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResolution>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>*>(nullptr, ___internal_method, imageSource, resolution);
}
// Ctor Parameters []
constexpr ::Modio::Unity::ModioImageTexture2DExtensions::ModioImageTexture2DExtensions()   {
}
