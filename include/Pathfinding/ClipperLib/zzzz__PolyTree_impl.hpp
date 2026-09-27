#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/PolyTree.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyNode_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyTree_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::PolyTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::PolyTree::*)()>(&::Pathfinding::ClipperLib::PolyTree::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa682c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyTree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::PolyTree.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::PolyTree::*)()>(&::Pathfinding::ClipperLib::PolyTree::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa682dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ClipperLib::PolyTree*>(),
                    {::i2c::class_of<::Pathfinding::ClipperLib::PolyTree*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::PolyTree.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::PolyTree::*)()>(&::Pathfinding::ClipperLib::PolyTree::Clear)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa682e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyTree*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*& Pathfinding::ClipperLib::PolyTree::__cordl_internal_get_m_AllPolys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllPolys;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>* const& Pathfinding::ClipperLib::PolyTree::__cordl_internal_get_m_AllPolys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllPolys;
}
constexpr void Pathfinding::ClipperLib::PolyTree::__cordl_internal_set_m_AllPolys(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllPolys = value;
}
inline void Pathfinding::ClipperLib::PolyTree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyTree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::PolyTree::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ClipperLib::PolyTree*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::PolyTree::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyTree*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::PolyTree* Pathfinding::ClipperLib::PolyTree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::PolyTree*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::PolyTree::PolyTree()   {
}
