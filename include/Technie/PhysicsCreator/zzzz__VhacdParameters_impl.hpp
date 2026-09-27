#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/VhacdParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__VhacdParameters_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::VhacdParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::VhacdParameters::*)()>(&::Technie::PhysicsCreator::VhacdParameters::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xadce0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::VhacdParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_concavity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___concavity;
}
constexpr float_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_concavity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___concavity;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_concavity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___concavity = value;
}
constexpr float_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_alpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alpha;
}
constexpr float_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_alpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alpha;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_alpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alpha = value;
}
constexpr float_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_beta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beta;
}
constexpr float_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_beta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beta;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_beta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beta = value;
}
constexpr float_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_minVolumePerCH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolumePerCH;
}
constexpr float_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_minVolumePerCH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolumePerCH;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_minVolumePerCH(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVolumePerCH = value;
}
constexpr uint32_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr uint32_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_resolution(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolution = value;
}
constexpr uint32_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_maxNumVerticesPerCH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNumVerticesPerCH;
}
constexpr uint32_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_maxNumVerticesPerCH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNumVerticesPerCH;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_maxNumVerticesPerCH(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNumVerticesPerCH = value;
}
constexpr uint32_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_planeDownsampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeDownsampling;
}
constexpr uint32_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_planeDownsampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeDownsampling;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_planeDownsampling(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___planeDownsampling = value;
}
constexpr uint32_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_convexhullDownsampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___convexhullDownsampling;
}
constexpr uint32_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_convexhullDownsampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___convexhullDownsampling;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_convexhullDownsampling(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___convexhullDownsampling = value;
}
constexpr uint32_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_pca()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pca;
}
constexpr uint32_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_pca() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pca;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_pca(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pca = value;
}
constexpr uint32_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr uint32_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_mode(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr uint32_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_convexhullApproximation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___convexhullApproximation;
}
constexpr uint32_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_convexhullApproximation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___convexhullApproximation;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_convexhullApproximation(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___convexhullApproximation = value;
}
constexpr uint32_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_oclAcceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oclAcceleration;
}
constexpr uint32_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_oclAcceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oclAcceleration;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_oclAcceleration(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oclAcceleration = value;
}
constexpr uint32_t& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_maxConvexHulls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConvexHulls;
}
constexpr uint32_t const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_maxConvexHulls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConvexHulls;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_maxConvexHulls(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxConvexHulls = value;
}
constexpr bool& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_projectHullVertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectHullVertices;
}
constexpr bool const& Technie::PhysicsCreator::VhacdParameters::__cordl_internal_get_projectHullVertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectHullVertices;
}
constexpr void Technie::PhysicsCreator::VhacdParameters::__cordl_internal_set_projectHullVertices(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectHullVertices = value;
}
inline void Technie::PhysicsCreator::VhacdParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::VhacdParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::VhacdParameters* Technie::PhysicsCreator::VhacdParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::VhacdParameters*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::VhacdParameters::VhacdParameters()   {
}
