#pragma once
// IWYU pragma private; include "Fusion/EditorButtonAttribute.hpp"
#include "Fusion/zzzz__EditorButtonVisibility_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__EditorButtonAttribute_def.hpp"
#include "Fusion/zzzz__EditorButtonVisibility_def.hpp"
//  Writing Method size for method: ::Fusion::EditorButtonAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::EditorButtonAttribute::*)(::StringW, ::Fusion::EditorButtonVisibility, int32_t, bool)>(&::Fusion::EditorButtonAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f3d634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EditorButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::EditorButtonVisibility>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EditorButtonAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::EditorButtonAttribute::*)(::Fusion::EditorButtonVisibility, int32_t, bool)>(&::Fusion::EditorButtonAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f3d684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EditorButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::EditorButtonVisibility>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::EditorButtonAttribute::__cordl_internal_get_Label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Label;
}
constexpr ::StringW const& Fusion::EditorButtonAttribute::__cordl_internal_get_Label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Label;
}
constexpr void Fusion::EditorButtonAttribute::__cordl_internal_set_Label(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Label = value;
}
constexpr ::Fusion::EditorButtonVisibility& Fusion::EditorButtonAttribute::__cordl_internal_get_Visibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Visibility;
}
constexpr ::Fusion::EditorButtonVisibility const& Fusion::EditorButtonAttribute::__cordl_internal_get_Visibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Visibility;
}
constexpr void Fusion::EditorButtonAttribute::__cordl_internal_set_Visibility(::Fusion::EditorButtonVisibility  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Visibility = value;
}
constexpr int32_t& Fusion::EditorButtonAttribute::__cordl_internal_get_Priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr int32_t const& Fusion::EditorButtonAttribute::__cordl_internal_get_Priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr void Fusion::EditorButtonAttribute::__cordl_internal_set_Priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Priority = value;
}
constexpr bool& Fusion::EditorButtonAttribute::__cordl_internal_get_DirtyObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirtyObject;
}
constexpr bool const& Fusion::EditorButtonAttribute::__cordl_internal_get_DirtyObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirtyObject;
}
constexpr void Fusion::EditorButtonAttribute::__cordl_internal_set_DirtyObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DirtyObject = value;
}
inline void Fusion::EditorButtonAttribute::_ctor(::StringW  label, ::Fusion::EditorButtonVisibility  visibility, int32_t  priority, bool  dirtyObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EditorButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::EditorButtonVisibility>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, visibility, priority, dirtyObject);
}
inline void Fusion::EditorButtonAttribute::_ctor(::Fusion::EditorButtonVisibility  visibility, int32_t  priority, bool  dirtyObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EditorButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::EditorButtonVisibility>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visibility, priority, dirtyObject);
}
inline ::Fusion::EditorButtonAttribute* Fusion::EditorButtonAttribute::New_ctor(::StringW  label, ::Fusion::EditorButtonVisibility  visibility, int32_t  priority, bool  dirtyObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::EditorButtonAttribute*>(label, visibility, priority, dirtyObject));
}
inline ::Fusion::EditorButtonAttribute* Fusion::EditorButtonAttribute::New_ctor(::Fusion::EditorButtonVisibility  visibility, int32_t  priority, bool  dirtyObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::EditorButtonAttribute*>(visibility, priority, dirtyObject));
}
// Ctor Parameters []
constexpr ::Fusion::EditorButtonAttribute::EditorButtonAttribute()   {
}
