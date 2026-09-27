#pragma once
// IWYU pragma private; include "Meta/WitAi/Comment.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/zzzz__Comment_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Comment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Comment::*)()>(&::Meta::WitAi::Comment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e75434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Comment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Comment::__cordl_internal_get_title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr ::StringW const& Meta::WitAi::Comment::__cordl_internal_get_title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr void Meta::WitAi::Comment::__cordl_internal_set_title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___title = value;
}
constexpr ::StringW& Meta::WitAi::Comment::__cordl_internal_get_comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment;
}
constexpr ::StringW const& Meta::WitAi::Comment::__cordl_internal_get_comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment;
}
constexpr void Meta::WitAi::Comment::__cordl_internal_set_comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comment = value;
}
constexpr bool& Meta::WitAi::Comment::__cordl_internal_get_lockComment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockComment;
}
constexpr bool const& Meta::WitAi::Comment::__cordl_internal_get_lockComment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockComment;
}
constexpr void Meta::WitAi::Comment::__cordl_internal_set_lockComment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockComment = value;
}
inline void Meta::WitAi::Comment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Comment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Comment* Meta::WitAi::Comment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Comment*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Comment::Comment()   {
}
