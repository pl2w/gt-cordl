#pragma once
// IWYU pragma private; include "CjLib/LatexFormula.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "CjLib/zzzz__LatexFormula_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::CjLib::LatexFormula._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::LatexFormula::*)()>(&::CjLib::LatexFormula::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e0c31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::LatexFormula*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& CjLib::LatexFormula::__cordl_internal_get_m_hash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hash;
}
constexpr int32_t const& CjLib::LatexFormula::__cordl_internal_get_m_hash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hash;
}
constexpr void CjLib::LatexFormula::__cordl_internal_set_m_hash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hash = value;
}
constexpr ::StringW& CjLib::LatexFormula::__cordl_internal_get_m_formula()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_formula;
}
constexpr ::StringW const& CjLib::LatexFormula::__cordl_internal_get_m_formula() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_formula;
}
constexpr void CjLib::LatexFormula::__cordl_internal_set_m_formula(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_formula = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& CjLib::LatexFormula::__cordl_internal_get_m_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_texture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& CjLib::LatexFormula::__cordl_internal_get_m_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_texture;
}
constexpr void CjLib::LatexFormula::__cordl_internal_set_m_texture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_texture = value;
}
inline void CjLib::LatexFormula::setStaticF_BaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "BaseUrl", ::CjLib::LatexFormula*>(std::forward<::StringW>(value));
}
inline ::StringW CjLib::LatexFormula::getStaticF_BaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "BaseUrl", ::CjLib::LatexFormula*>();
}
inline void CjLib::LatexFormula::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::LatexFormula*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::LatexFormula* CjLib::LatexFormula::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::LatexFormula*>());
}
// Ctor Parameters []
constexpr ::CjLib::LatexFormula::LatexFormula()   {
}
