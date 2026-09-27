#pragma once
// IWYU pragma private; include "Liv/NGFX/ResourceDestroyInfo.hpp"
#include "Liv/NGFX/zzzz__EventType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Liv/NGFX/zzzz__ResourceDestroyInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Liv::NGFX::ResourceDestroyInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::ResourceDestroyInfo::*)(::System::IntPtr, uint32_t)>(&::Liv::NGFX::ResourceDestroyInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cdb7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::ResourceDestroyInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::NGFX::ResourceDestroyInfo::setStaticF_eventType(::Liv::NGFX::EventType  value)  {
::cordl_internals::setStaticField<::Liv::NGFX::EventType, "eventType", ::Liv::NGFX::ResourceDestroyInfo>(std::forward<::Liv::NGFX::EventType>(value));
}
inline ::Liv::NGFX::EventType Liv::NGFX::ResourceDestroyInfo::getStaticF_eventType()  {
return ::cordl_internals::getStaticField<::Liv::NGFX::EventType, "eventType", ::Liv::NGFX::ResourceDestroyInfo>();
}
inline void Liv::NGFX::ResourceDestroyInfo::_ctor(::System::IntPtr  ctx, uint32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::ResourceDestroyInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, id);
}
// Ctor Parameters [CppParam { name: "m_context", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_id", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::NGFX::ResourceDestroyInfo::ResourceDestroyInfo(::System::IntPtr  m_context, uint32_t  m_id) noexcept  {
this->m_context = m_context;
this->m_id = m_id;
}
// Ctor Parameters []
constexpr ::Liv::NGFX::ResourceDestroyInfo::ResourceDestroyInfo()   {
}
