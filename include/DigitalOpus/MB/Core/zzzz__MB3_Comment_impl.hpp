#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_Comment.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_Comment_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_Comment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_Comment::*)()>(&::DigitalOpus::MB::Core::MB3_Comment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dec49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_Comment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& DigitalOpus::MB::Core::MB3_Comment::__cordl_internal_get_comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment;
}
constexpr ::StringW const& DigitalOpus::MB::Core::MB3_Comment::__cordl_internal_get_comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment;
}
constexpr void DigitalOpus::MB::Core::MB3_Comment::__cordl_internal_set_comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comment = value;
}
inline void DigitalOpus::MB::Core::MB3_Comment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_Comment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_Comment* DigitalOpus::MB::Core::MB3_Comment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_Comment*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_Comment::MB3_Comment()   {
}
