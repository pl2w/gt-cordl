#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_TexturePacker.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_NodeType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker.RoundToNearestPositivePowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePacker::RoundToNearestPositivePowerOfTwo)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9dc0dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {"RoundToNearestPositivePowerOfTwo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker.CeilToNearestPowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePacker::CeilToNearestPowerOfTwo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9dc0edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {"CeilToNearestPowerOfTwo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker.GetRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB2_TexturePacker::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePacker::GetRects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker.GetRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB2_TexturePacker::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int32_t, int32_t, bool)>(&::DigitalOpus::MB::Core::MB2_TexturePacker::GetRects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker.ScaleAtlasToFitMaxDim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_TexturePacker::*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*, int32_t, int32_t, ::DigitalOpus::MB::Core::AtlasPadding, int32_t, int32_t, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB2_TexturePacker::ScaleAtlasToFitMaxDim)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x9dc0f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {"ScaleAtlasToFitMaxDim", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPadding>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker.ConvertToRectsWithoutPaddingAndNormalize01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker::*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPadding)>(&::DigitalOpus::MB::Core::MB2_TexturePacker::ConvertToRectsWithoutPaddingAndNormalize01)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9dc144c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {"ConvertToRectsWithoutPaddingAndNormalize01", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPadding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePacker::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9dc14d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB2_TexturePacker::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB2_TexturePacker::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr bool& DigitalOpus::MB::Core::MB2_TexturePacker::__cordl_internal_get_atlasMustBePowerOfTwo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasMustBePowerOfTwo;
}
constexpr bool const& DigitalOpus::MB::Core::MB2_TexturePacker::__cordl_internal_get_atlasMustBePowerOfTwo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasMustBePowerOfTwo;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker::__cordl_internal_set_atlasMustBePowerOfTwo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasMustBePowerOfTwo = value;
}
inline int32_t DigitalOpus::MB::Core::MB2_TexturePacker::RoundToNearestPositivePowerOfTwo(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {"RoundToNearestPositivePowerOfTwo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x);
}
inline int32_t DigitalOpus::MB::Core::MB2_TexturePacker::CeilToNearestPowerOfTwo(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {"CeilToNearestPowerOfTwo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB2_TexturePacker::GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, imgWidthHeights, maxDimensionX, maxDimensionY, padding);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB2_TexturePacker::GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, bool  doMultiAtlas)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, doMultiAtlas);
}
inline bool DigitalOpus::MB::Core::MB2_TexturePacker::ScaleAtlasToFitMaxDim(::UnityEngine::Vector2  rootWH, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*  images, int32_t  maxDimensionX, int32_t  maxDimensionY, ::DigitalOpus::MB::Core::AtlasPadding  padding, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY, ::by_ref<int32_t>  outW, ::by_ref<int32_t>  outH, ::by_ref<float_t>  padX, ::by_ref<float_t>  padY, ::by_ref<int32_t>  newMinSizeX, ::by_ref<int32_t>  newMinSizeY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {"ScaleAtlasToFitMaxDim", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPadding>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rootWH, images, maxDimensionX, maxDimensionY, padding, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY, outW, outH, padX, padY, newMinSizeX, newMinSizeY);
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker::ConvertToRectsWithoutPaddingAndNormalize01(::DigitalOpus::MB::Core::AtlasPackingResult*  rr, ::DigitalOpus::MB::Core::AtlasPadding  padding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {"ConvertToRectsWithoutPaddingAndNormalize01", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPadding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rr, padding);
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker* DigitalOpus::MB::Core::MB2_TexturePacker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePacker*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker::MB2_TexturePacker()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::*)(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*)>(&::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::Compare)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9dc1848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc187c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer* DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr  DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::operator ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::i___System__Collections__Generic__IComparer_1___DigitalOpus__MB__Core__MB2_TexturePacker_Image__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageAreaComparer::MB2_TexturePacker_ImageAreaComparer()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::*)(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*)>(&::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::Compare)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9dc1814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc1840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer* DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr  DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::operator ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::i___System__Collections__Generic__IComparer_1___DigitalOpus__MB__Core__MB2_TexturePacker_Image__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageWidthComparer::MB2_TexturePacker_ImageWidthComparer()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::*)(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*)>(&::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::Compare)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9dc17e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc180c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer* DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr  DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::operator ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::i___System__Collections__Generic__IComparer_1___DigitalOpus__MB__Core__MB2_TexturePacker_Image__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_ImageHeightComparer::MB2_TexturePacker_ImageHeightComparer()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::*)(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*)>(&::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::Compare)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9dc17ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc17d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::Compare(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  x, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer* DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr  DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::operator ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>"
constexpr ::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>* DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::i___System__Collections__Generic__IComparer_1___DigitalOpus__MB__Core__MB2_TexturePacker_Image__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_ImgIDComparer::MB2_TexturePacker_ImgIDComparer()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_Image._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker_Image::*)(int32_t, int32_t, int32_t, ::DigitalOpus::MB::Core::AtlasPadding, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePacker_Image::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9dc1700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPadding>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_Image._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker_Image::*)(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*)>(&::DigitalOpus::MB::Core::MB2_TexturePacker_Image::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9dc1770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_imgId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imgId;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_imgId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imgId;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_set_imgId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___imgId = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_w()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_w() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_set_w(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___w = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_h()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_h() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_set_h(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___h = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_set_x(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___y;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_get_y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___y;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker_Image::__cordl_internal_set_y(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___y = value;
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker_Image::_ctor(int32_t  id, int32_t  tw, int32_t  th, ::DigitalOpus::MB::Core::AtlasPadding  padding, int32_t  minImageSizeX, int32_t  minImageSizeY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPadding>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, tw, th, padding, minImageSizeX, minImageSizeY);
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker_Image::_ctor(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  im)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, im);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* DigitalOpus::MB::Core::MB2_TexturePacker_Image::New_ctor(int32_t  id, int32_t  tw, int32_t  th, ::DigitalOpus::MB::Core::AtlasPadding  padding, int32_t  minImageSizeX, int32_t  minImageSizeY)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(id, tw, th, padding, minImageSizeX, minImageSizeY));
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* DigitalOpus::MB::Core::MB2_TexturePacker_Image::New_ctor(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  im)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(im));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_Image::MB2_TexturePacker_Image()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc14e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::*)(int32_t, int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9dc14f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9dc1530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_set_x(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_get_y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___y;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_get_y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___y;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_set_y(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___y = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_get_w()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_get_w() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___w;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_set_w(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___w = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_get_h()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_get_h() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::__cordl_internal_set_h(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___h = value;
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::_ctor(int32_t  xx, int32_t  yy, int32_t  ww, int32_t  hh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xx, yy, ww, hh);
}
inline ::StringW DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect* DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*>());
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect* DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::New_ctor(int32_t  xx, int32_t  yy, int32_t  ww, int32_t  hh)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*>(xx, yy, ww, hh));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect::MB2_TexturePacker_PixRect()   {
}
