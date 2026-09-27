#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIActionSender.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIInput_ModioAction_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIActionSender_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIActionSender.PressedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIActionSender::*)()>(&::Modio::Unity::UI::Input::ModioUIActionSender::PressedAction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fb4514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIActionSender*>(),
                        {"PressedAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIActionSender._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIActionSender::*)()>(&::Modio::Unity::UI::Input::ModioUIActionSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb4958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIActionSender*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ModioUIInput_ModioAction& Modio::Unity::UI::Input::ModioUIActionSender::__cordl_internal_get__action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____action;
}
constexpr ::GlobalNamespace::ModioUIInput_ModioAction const& Modio::Unity::UI::Input::ModioUIActionSender::__cordl_internal_get__action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____action;
}
constexpr void Modio::Unity::UI::Input::ModioUIActionSender::__cordl_internal_set__action(::GlobalNamespace::ModioUIInput_ModioAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____action = value;
}
inline void Modio::Unity::UI::Input::ModioUIActionSender::PressedAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIActionSender*>(),
                        {"PressedAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIActionSender::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIActionSender*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Input::ModioUIActionSender* Modio::Unity::UI::Input::ModioUIActionSender::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Input::ModioUIActionSender*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Input::ModioUIActionSender::ModioUIActionSender()   {
}
