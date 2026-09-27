#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_Meta_impl.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_Frame_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_Meta_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_SpriteFrame_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_SpriteSize_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_def.hpp"
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::*)()>(&::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3aea24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray* TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*>());
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray::TexturePacker_JsonArray()   {
}
//  Writing Method size for method: ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::*)()>(&::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3aece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TexturePacker_JsonArray_Frame>*& TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_get_frames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frames;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TexturePacker_JsonArray_Frame>* const& TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_get_frames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frames;
}
constexpr void TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_set_frames(::System::Collections::Generic::List_1<::GlobalNamespace::TexturePacker_JsonArray_Frame>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frames = value;
}
constexpr ::GlobalNamespace::TexturePacker_JsonArray_Meta& TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_get_meta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meta;
}
constexpr ::GlobalNamespace::TexturePacker_JsonArray_Meta const& TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_get_meta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meta;
}
constexpr void TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::__cordl_internal_set_meta(::GlobalNamespace::TexturePacker_JsonArray_Meta  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meta = value;
}
inline void TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject* TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject*>());
}
// Ctor Parameters []
constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject::TexturePacker_JsonArray_SpriteDataObject()   {
}
