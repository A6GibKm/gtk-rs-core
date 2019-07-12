// This file was generated by gir (https://github.com/gtk-rs/gir)
// from gir-files (https://github.com/gtk-rs/gir-files)
// DO NOT EDIT

use glib::object::Cast;
use glib::object::IsA;
use glib::signal::connect_raw;
use glib::signal::SignalHandlerId;
use glib::translate::*;
use glib::StaticType;
use glib::Value;
use glib_sys;
use gobject_sys;
use gtk_sys;
use std::boxed::Box as Box_;
use std::fmt;
use std::mem;
use std::mem::transmute;
use CellArea;

glib_wrapper! {
    pub struct CellAreaContext(Object<gtk_sys::GtkCellAreaContext, gtk_sys::GtkCellAreaContextClass, CellAreaContextClass>);

    match fn {
        get_type => || gtk_sys::gtk_cell_area_context_get_type(),
    }
}

pub const NONE_CELL_AREA_CONTEXT: Option<&CellAreaContext> = None;

pub trait CellAreaContextExt: 'static {
    fn allocate(&self, width: i32, height: i32);

    fn get_allocation(&self) -> (i32, i32);

    fn get_area(&self) -> Option<CellArea>;

    fn get_preferred_height(&self) -> (i32, i32);

    fn get_preferred_height_for_width(&self, width: i32) -> (i32, i32);

    fn get_preferred_width(&self) -> (i32, i32);

    fn get_preferred_width_for_height(&self, height: i32) -> (i32, i32);

    fn push_preferred_height(&self, minimum_height: i32, natural_height: i32);

    fn push_preferred_width(&self, minimum_width: i32, natural_width: i32);

    fn reset(&self);

    fn get_property_minimum_height(&self) -> i32;

    fn get_property_minimum_width(&self) -> i32;

    fn get_property_natural_height(&self) -> i32;

    fn get_property_natural_width(&self) -> i32;

    fn connect_property_minimum_height_notify<F: Fn(&Self) + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId;

    fn connect_property_minimum_width_notify<F: Fn(&Self) + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId;

    fn connect_property_natural_height_notify<F: Fn(&Self) + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId;

    fn connect_property_natural_width_notify<F: Fn(&Self) + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId;
}

impl<O: IsA<CellAreaContext>> CellAreaContextExt for O {
    fn allocate(&self, width: i32, height: i32) {
        unsafe {
            gtk_sys::gtk_cell_area_context_allocate(self.as_ref().to_glib_none().0, width, height);
        }
    }

    fn get_allocation(&self) -> (i32, i32) {
        unsafe {
            let mut width = mem::MaybeUninit::uninit();
            let mut height = mem::MaybeUninit::uninit();
            gtk_sys::gtk_cell_area_context_get_allocation(
                self.as_ref().to_glib_none().0,
                width.as_mut_ptr(),
                height.as_mut_ptr(),
            );
            let width = width.assume_init();
            let height = height.assume_init();
            (width, height)
        }
    }

    fn get_area(&self) -> Option<CellArea> {
        unsafe {
            from_glib_none(gtk_sys::gtk_cell_area_context_get_area(
                self.as_ref().to_glib_none().0,
            ))
        }
    }

    fn get_preferred_height(&self) -> (i32, i32) {
        unsafe {
            let mut minimum_height = mem::MaybeUninit::uninit();
            let mut natural_height = mem::MaybeUninit::uninit();
            gtk_sys::gtk_cell_area_context_get_preferred_height(
                self.as_ref().to_glib_none().0,
                minimum_height.as_mut_ptr(),
                natural_height.as_mut_ptr(),
            );
            let minimum_height = minimum_height.assume_init();
            let natural_height = natural_height.assume_init();
            (minimum_height, natural_height)
        }
    }

    fn get_preferred_height_for_width(&self, width: i32) -> (i32, i32) {
        unsafe {
            let mut minimum_height = mem::MaybeUninit::uninit();
            let mut natural_height = mem::MaybeUninit::uninit();
            gtk_sys::gtk_cell_area_context_get_preferred_height_for_width(
                self.as_ref().to_glib_none().0,
                width,
                minimum_height.as_mut_ptr(),
                natural_height.as_mut_ptr(),
            );
            let minimum_height = minimum_height.assume_init();
            let natural_height = natural_height.assume_init();
            (minimum_height, natural_height)
        }
    }

    fn get_preferred_width(&self) -> (i32, i32) {
        unsafe {
            let mut minimum_width = mem::MaybeUninit::uninit();
            let mut natural_width = mem::MaybeUninit::uninit();
            gtk_sys::gtk_cell_area_context_get_preferred_width(
                self.as_ref().to_glib_none().0,
                minimum_width.as_mut_ptr(),
                natural_width.as_mut_ptr(),
            );
            let minimum_width = minimum_width.assume_init();
            let natural_width = natural_width.assume_init();
            (minimum_width, natural_width)
        }
    }

    fn get_preferred_width_for_height(&self, height: i32) -> (i32, i32) {
        unsafe {
            let mut minimum_width = mem::MaybeUninit::uninit();
            let mut natural_width = mem::MaybeUninit::uninit();
            gtk_sys::gtk_cell_area_context_get_preferred_width_for_height(
                self.as_ref().to_glib_none().0,
                height,
                minimum_width.as_mut_ptr(),
                natural_width.as_mut_ptr(),
            );
            let minimum_width = minimum_width.assume_init();
            let natural_width = natural_width.assume_init();
            (minimum_width, natural_width)
        }
    }

    fn push_preferred_height(&self, minimum_height: i32, natural_height: i32) {
        unsafe {
            gtk_sys::gtk_cell_area_context_push_preferred_height(
                self.as_ref().to_glib_none().0,
                minimum_height,
                natural_height,
            );
        }
    }

    fn push_preferred_width(&self, minimum_width: i32, natural_width: i32) {
        unsafe {
            gtk_sys::gtk_cell_area_context_push_preferred_width(
                self.as_ref().to_glib_none().0,
                minimum_width,
                natural_width,
            );
        }
    }

    fn reset(&self) {
        unsafe {
            gtk_sys::gtk_cell_area_context_reset(self.as_ref().to_glib_none().0);
        }
    }

    fn get_property_minimum_height(&self) -> i32 {
        unsafe {
            let mut value = Value::from_type(<i32 as StaticType>::static_type());
            gobject_sys::g_object_get_property(
                self.to_glib_none().0 as *mut gobject_sys::GObject,
                b"minimum-height\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value.get().unwrap()
        }
    }

    fn get_property_minimum_width(&self) -> i32 {
        unsafe {
            let mut value = Value::from_type(<i32 as StaticType>::static_type());
            gobject_sys::g_object_get_property(
                self.to_glib_none().0 as *mut gobject_sys::GObject,
                b"minimum-width\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value.get().unwrap()
        }
    }

    fn get_property_natural_height(&self) -> i32 {
        unsafe {
            let mut value = Value::from_type(<i32 as StaticType>::static_type());
            gobject_sys::g_object_get_property(
                self.to_glib_none().0 as *mut gobject_sys::GObject,
                b"natural-height\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value.get().unwrap()
        }
    }

    fn get_property_natural_width(&self) -> i32 {
        unsafe {
            let mut value = Value::from_type(<i32 as StaticType>::static_type());
            gobject_sys::g_object_get_property(
                self.to_glib_none().0 as *mut gobject_sys::GObject,
                b"natural-width\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value.get().unwrap()
        }
    }

    fn connect_property_minimum_height_notify<F: Fn(&Self) + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId {
        unsafe extern "C" fn notify_minimum_height_trampoline<P, F: Fn(&P) + 'static>(
            this: *mut gtk_sys::GtkCellAreaContext,
            _param_spec: glib_sys::gpointer,
            f: glib_sys::gpointer,
        ) where
            P: IsA<CellAreaContext>,
        {
            let f: &F = &*(f as *const F);
            f(&CellAreaContext::from_glib_borrow(this).unsafe_cast())
        }
        unsafe {
            let f: Box_<F> = Box_::new(f);
            connect_raw(
                self.as_ptr() as *mut _,
                b"notify::minimum-height\0".as_ptr() as *const _,
                Some(transmute(
                    notify_minimum_height_trampoline::<Self, F> as usize,
                )),
                Box_::into_raw(f),
            )
        }
    }

    fn connect_property_minimum_width_notify<F: Fn(&Self) + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId {
        unsafe extern "C" fn notify_minimum_width_trampoline<P, F: Fn(&P) + 'static>(
            this: *mut gtk_sys::GtkCellAreaContext,
            _param_spec: glib_sys::gpointer,
            f: glib_sys::gpointer,
        ) where
            P: IsA<CellAreaContext>,
        {
            let f: &F = &*(f as *const F);
            f(&CellAreaContext::from_glib_borrow(this).unsafe_cast())
        }
        unsafe {
            let f: Box_<F> = Box_::new(f);
            connect_raw(
                self.as_ptr() as *mut _,
                b"notify::minimum-width\0".as_ptr() as *const _,
                Some(transmute(
                    notify_minimum_width_trampoline::<Self, F> as usize,
                )),
                Box_::into_raw(f),
            )
        }
    }

    fn connect_property_natural_height_notify<F: Fn(&Self) + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId {
        unsafe extern "C" fn notify_natural_height_trampoline<P, F: Fn(&P) + 'static>(
            this: *mut gtk_sys::GtkCellAreaContext,
            _param_spec: glib_sys::gpointer,
            f: glib_sys::gpointer,
        ) where
            P: IsA<CellAreaContext>,
        {
            let f: &F = &*(f as *const F);
            f(&CellAreaContext::from_glib_borrow(this).unsafe_cast())
        }
        unsafe {
            let f: Box_<F> = Box_::new(f);
            connect_raw(
                self.as_ptr() as *mut _,
                b"notify::natural-height\0".as_ptr() as *const _,
                Some(transmute(
                    notify_natural_height_trampoline::<Self, F> as usize,
                )),
                Box_::into_raw(f),
            )
        }
    }

    fn connect_property_natural_width_notify<F: Fn(&Self) + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId {
        unsafe extern "C" fn notify_natural_width_trampoline<P, F: Fn(&P) + 'static>(
            this: *mut gtk_sys::GtkCellAreaContext,
            _param_spec: glib_sys::gpointer,
            f: glib_sys::gpointer,
        ) where
            P: IsA<CellAreaContext>,
        {
            let f: &F = &*(f as *const F);
            f(&CellAreaContext::from_glib_borrow(this).unsafe_cast())
        }
        unsafe {
            let f: Box_<F> = Box_::new(f);
            connect_raw(
                self.as_ptr() as *mut _,
                b"notify::natural-width\0".as_ptr() as *const _,
                Some(transmute(
                    notify_natural_width_trampoline::<Self, F> as usize,
                )),
                Box_::into_raw(f),
            )
        }
    }
}

impl fmt::Display for CellAreaContext {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "CellAreaContext")
    }
}
