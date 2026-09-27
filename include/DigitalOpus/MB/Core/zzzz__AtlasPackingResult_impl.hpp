#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/AtlasPackingResult.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::AtlasPackingResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::AtlasPackingResult::*)(::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>)>(&::DigitalOpus::MB::Core::AtlasPackingResult::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9dc09a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::AtlasPackingResult.CalcUsedWidthAndHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::AtlasPackingResult::*)()>(&::DigitalOpus::MB::Core::AtlasPackingResult::CalcUsedWidthAndHeight)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x9dc09d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(),
                        {"CalcUsedWidthAndHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::AtlasPackingResult.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::AtlasPackingResult::*)()>(&::DigitalOpus::MB::Core::AtlasPackingResult::ToString)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x9dc0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_atlasX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasX;
}
constexpr int32_t const& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_atlasX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasX;
}
constexpr void DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_set_atlasX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasX = value;
}
constexpr int32_t& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_atlasY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasY;
}
constexpr int32_t const& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_atlasY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasY;
}
constexpr void DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_set_atlasY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasY = value;
}
constexpr int32_t& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_usedW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedW;
}
constexpr int32_t const& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_usedW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedW;
}
constexpr void DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_set_usedW(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usedW = value;
}
constexpr int32_t& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_usedH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedH;
}
constexpr int32_t const& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_usedH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedH;
}
constexpr void DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_set_usedH(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usedH = value;
}
constexpr ::ArrayW<::UnityEngine::Rect>& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_rects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rects;
}
constexpr ::ArrayW<::UnityEngine::Rect> const& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_rects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rects;
}
constexpr void DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_set_rects(::ArrayW<::UnityEngine::Rect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rects = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_padding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padding;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::AtlasPadding> const& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_padding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padding;
}
constexpr void DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_set_padding(::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___padding = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_srcImgIdxs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcImgIdxs;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_srcImgIdxs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcImgIdxs;
}
constexpr void DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_set_srcImgIdxs(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___srcImgIdxs = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::AtlasPackingResult::__cordl_internal_set_data(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void DigitalOpus::MB::Core::AtlasPackingResult::_ctor(::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>  pds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pds);
}
inline void DigitalOpus::MB::Core::AtlasPackingResult::CalcUsedWidthAndHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(),
                        {"CalcUsedWidthAndHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW DigitalOpus::MB::Core::AtlasPackingResult::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::AtlasPackingResult* DigitalOpus::MB::Core::AtlasPackingResult::New_ctor(::ArrayW<::DigitalOpus::MB::Core::AtlasPadding>  pds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::AtlasPackingResult*>(pds));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::AtlasPackingResult::AtlasPackingResult()   {
}
