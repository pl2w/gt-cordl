#pragma once
// IWYU pragma private; include "Drawing/Text/SDFLookupData.hpp"
#include "Drawing/Text/zzzz__SDFCharacter_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Drawing/Text/zzzz__SDFLookupData_def.hpp"
#include "Drawing/Text/zzzz__SDFFont_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::Drawing::Text::SDFLookupData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Text::SDFLookupData::*)(::Drawing::Text::SDFFont)>(&::Drawing::Text::SDFLookupData::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x55dc4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Text::SDFLookupData>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::Text::SDFFont>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Text::SDFLookupData.GetIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Drawing::Text::SDFLookupData::*)(char16_t)>(&::Drawing::Text::SDFLookupData::GetIndex)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55dc778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Text::SDFLookupData>(),
                        {"GetIndex", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Text::SDFLookupData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Text::SDFLookupData::*)()>(&::Drawing::Text::SDFLookupData::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x55dc82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Text::SDFLookupData>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::Text::SDFLookupData::_ctor(::Drawing::Text::SDFFont  font)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Text::SDFLookupData>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::Text::SDFFont>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, font);
}
inline int32_t Drawing::Text::SDFLookupData::GetIndex(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Text::SDFLookupData>(),
                        {"GetIndex", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, c);
}
inline void Drawing::Text::SDFLookupData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Text::SDFLookupData>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "characters", ty: "::Unity::Collections::NativeArray_1<::Drawing::Text::SDFCharacter>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lookup", ty: "::System::Collections::Generic::Dictionary_2<char16_t,int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::Text::SDFLookupData::SDFLookupData(::Unity::Collections::NativeArray_1<::Drawing::Text::SDFCharacter>  characters, ::System::Collections::Generic::Dictionary_2<char16_t,int32_t>*  lookup, ::UnityW<::UnityEngine::Material>  material) noexcept  {
this->characters = characters;
this->lookup = lookup;
this->material = material;
}
// Ctor Parameters []
constexpr ::Drawing::Text::SDFLookupData::SDFLookupData()   {
}
