#pragma once
// IWYU pragma private; include "LitJson/FsmContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LitJson/zzzz__FsmContext_def.hpp"
#include "LitJson/zzzz__Lexer_def.hpp"
//  Writing Method size for method: ::LitJson::FsmContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::FsmContext::*)()>(&::LitJson::FsmContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::FsmContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& LitJson::FsmContext::__cordl_internal_get_Return()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Return;
}
constexpr bool const& LitJson::FsmContext::__cordl_internal_get_Return() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Return;
}
constexpr void LitJson::FsmContext::__cordl_internal_set_Return(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Return = value;
}
constexpr int32_t& LitJson::FsmContext::__cordl_internal_get_NextState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextState;
}
constexpr int32_t const& LitJson::FsmContext::__cordl_internal_get_NextState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextState;
}
constexpr void LitJson::FsmContext::__cordl_internal_set_NextState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextState = value;
}
constexpr ::LitJson::Lexer*& LitJson::FsmContext::__cordl_internal_get_L()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr ::LitJson::Lexer* const& LitJson::FsmContext::__cordl_internal_get_L() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr void LitJson::FsmContext::__cordl_internal_set_L(::LitJson::Lexer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___L = value;
}
constexpr int32_t& LitJson::FsmContext::__cordl_internal_get_StateStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateStack;
}
constexpr int32_t const& LitJson::FsmContext::__cordl_internal_get_StateStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateStack;
}
constexpr void LitJson::FsmContext::__cordl_internal_set_StateStack(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StateStack = value;
}
inline void LitJson::FsmContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::FsmContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LitJson::FsmContext* LitJson::FsmContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::FsmContext*>());
}
// Ctor Parameters []
constexpr ::LitJson::FsmContext::FsmContext()   {
}
