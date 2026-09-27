#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/StaticTree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__StaticTree_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::StaticTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::StaticTree::*)(::ArrayW<int16_t>, ::ArrayW<int32_t>, int32_t, int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::StaticTree::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6ad36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::StaticTree*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_treeCodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeCodes;
}
constexpr ::ArrayW<int16_t> const& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_treeCodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeCodes;
}
constexpr void Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_set_treeCodes(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeCodes = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_extraBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraBits;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_extraBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraBits;
}
constexpr void Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_set_extraBits(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraBits = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_extraBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraBase;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_extraBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraBase;
}
constexpr void Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_set_extraBase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraBase = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_elems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elems;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_elems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elems;
}
constexpr void Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_set_elems(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elems = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_maxLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLength;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_get_maxLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLength;
}
constexpr void Pathfinding::Ionic::Zlib::StaticTree::__cordl_internal_set_maxLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLength = value;
}
inline void Pathfinding::Ionic::Zlib::StaticTree::setStaticF_lengthAndLiteralsTreeCodes(::ArrayW<int16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "lengthAndLiteralsTreeCodes", ::Pathfinding::Ionic::Zlib::StaticTree*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Pathfinding::Ionic::Zlib::StaticTree::getStaticF_lengthAndLiteralsTreeCodes()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "lengthAndLiteralsTreeCodes", ::Pathfinding::Ionic::Zlib::StaticTree*>();
}
inline void Pathfinding::Ionic::Zlib::StaticTree::setStaticF_distTreeCodes(::ArrayW<int16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "distTreeCodes", ::Pathfinding::Ionic::Zlib::StaticTree*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Pathfinding::Ionic::Zlib::StaticTree::getStaticF_distTreeCodes()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "distTreeCodes", ::Pathfinding::Ionic::Zlib::StaticTree*>();
}
inline void Pathfinding::Ionic::Zlib::StaticTree::setStaticF_Literals(::Pathfinding::Ionic::Zlib::StaticTree*  value)  {
::cordl_internals::setStaticField<::Pathfinding::Ionic::Zlib::StaticTree*, "Literals", ::Pathfinding::Ionic::Zlib::StaticTree*>(std::forward<::Pathfinding::Ionic::Zlib::StaticTree*>(value));
}
inline ::Pathfinding::Ionic::Zlib::StaticTree* Pathfinding::Ionic::Zlib::StaticTree::getStaticF_Literals()  {
return ::cordl_internals::getStaticField<::Pathfinding::Ionic::Zlib::StaticTree*, "Literals", ::Pathfinding::Ionic::Zlib::StaticTree*>();
}
inline void Pathfinding::Ionic::Zlib::StaticTree::setStaticF_Distances(::Pathfinding::Ionic::Zlib::StaticTree*  value)  {
::cordl_internals::setStaticField<::Pathfinding::Ionic::Zlib::StaticTree*, "Distances", ::Pathfinding::Ionic::Zlib::StaticTree*>(std::forward<::Pathfinding::Ionic::Zlib::StaticTree*>(value));
}
inline ::Pathfinding::Ionic::Zlib::StaticTree* Pathfinding::Ionic::Zlib::StaticTree::getStaticF_Distances()  {
return ::cordl_internals::getStaticField<::Pathfinding::Ionic::Zlib::StaticTree*, "Distances", ::Pathfinding::Ionic::Zlib::StaticTree*>();
}
inline void Pathfinding::Ionic::Zlib::StaticTree::setStaticF_BitLengths(::Pathfinding::Ionic::Zlib::StaticTree*  value)  {
::cordl_internals::setStaticField<::Pathfinding::Ionic::Zlib::StaticTree*, "BitLengths", ::Pathfinding::Ionic::Zlib::StaticTree*>(std::forward<::Pathfinding::Ionic::Zlib::StaticTree*>(value));
}
inline ::Pathfinding::Ionic::Zlib::StaticTree* Pathfinding::Ionic::Zlib::StaticTree::getStaticF_BitLengths()  {
return ::cordl_internals::getStaticField<::Pathfinding::Ionic::Zlib::StaticTree*, "BitLengths", ::Pathfinding::Ionic::Zlib::StaticTree*>();
}
inline void Pathfinding::Ionic::Zlib::StaticTree::_ctor(::ArrayW<int16_t>  treeCodes, ::ArrayW<int32_t>  extraBits, int32_t  extraBase, int32_t  elems, int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::StaticTree*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, treeCodes, extraBits, extraBase, elems, maxLength);
}
inline ::Pathfinding::Ionic::Zlib::StaticTree* Pathfinding::Ionic::Zlib::StaticTree::New_ctor(::ArrayW<int16_t>  treeCodes, ::ArrayW<int32_t>  extraBits, int32_t  extraBase, int32_t  elems, int32_t  maxLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::StaticTree*>(treeCodes, extraBits, extraBase, elems, maxLength));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::StaticTree::StaticTree()   {
}
