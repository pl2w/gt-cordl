#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/PolyNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyNode_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::PolyNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::PolyNode::*)()>(&::Pathfinding::ClipperLib::PolyNode::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa682d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::PolyNode.get_ChildCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::ClipperLib::PolyNode::*)()>(&::Pathfinding::ClipperLib::PolyNode::get_ChildCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa682f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"get_ChildCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::PolyNode.get_Contour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>* (::Pathfinding::ClipperLib::PolyNode::*)()>(&::Pathfinding::ClipperLib::PolyNode::get_Contour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa682fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"get_Contour", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::PolyNode.AddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::PolyNode::*)(::Pathfinding::ClipperLib::PolyNode*)>(&::Pathfinding::ClipperLib::PolyNode::AddChild)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa682fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"AddChild", {}, {::i2c::type_of<::Pathfinding::ClipperLib::PolyNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::PolyNode.get_Childs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>* (::Pathfinding::ClipperLib::PolyNode::*)()>(&::Pathfinding::ClipperLib::PolyNode::get_Childs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa683078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"get_Childs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::PolyNode.set_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::PolyNode::*)(bool)>(&::Pathfinding::ClipperLib::PolyNode::set_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa683080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::ClipperLib::PolyNode*& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get_m_Parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Parent;
}
constexpr ::Pathfinding::ClipperLib::PolyNode* const& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get_m_Parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Parent;
}
constexpr void Pathfinding::ClipperLib::PolyNode::__cordl_internal_set_m_Parent(::Pathfinding::ClipperLib::PolyNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Parent = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get_m_polygon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_polygon;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>* const& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get_m_polygon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_polygon;
}
constexpr void Pathfinding::ClipperLib::PolyNode::__cordl_internal_set_m_polygon(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_polygon = value;
}
constexpr int32_t& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get_m_Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Index;
}
constexpr int32_t const& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get_m_Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Index;
}
constexpr void Pathfinding::ClipperLib::PolyNode::__cordl_internal_set_m_Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Index = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get_m_Childs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Childs;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>* const& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get_m_Childs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Childs;
}
constexpr void Pathfinding::ClipperLib::PolyNode::__cordl_internal_set_m_Childs(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Childs = value;
}
constexpr bool& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get__IsOpen_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOpen_k__BackingField;
}
constexpr bool const& Pathfinding::ClipperLib::PolyNode::__cordl_internal_get__IsOpen_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOpen_k__BackingField;
}
constexpr void Pathfinding::ClipperLib::PolyNode::__cordl_internal_set__IsOpen_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsOpen_k__BackingField = value;
}
inline void Pathfinding::ClipperLib::PolyNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::ClipperLib::PolyNode::get_ChildCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"get_ChildCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>* Pathfinding::ClipperLib::PolyNode::get_Contour()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"get_Contour", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::PolyNode::AddChild(::Pathfinding::ClipperLib::PolyNode*  Child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"AddChild", {}, {::i2c::type_of<::Pathfinding::ClipperLib::PolyNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Child);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>* Pathfinding::ClipperLib::PolyNode::get_Childs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"get_Childs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::PolyNode::set_IsOpen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::PolyNode*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::ClipperLib::PolyNode* Pathfinding::ClipperLib::PolyNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::PolyNode*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::PolyNode::PolyNode()   {
}
